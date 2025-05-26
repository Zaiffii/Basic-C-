#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <filesystem>
#include <openssl/sha.h>

namespace fs = std::filesystem;

// Function to compute the SHA-256 hash of a file
std::string compute_hash(const std::string& file_path) {
    std::ifstream file(file_path, std::ios::binary);
    if (!file) {
        std::cerr << "Error: Unable to open file " << file_path << ". Please check if the file exists and you have the necessary permissions.\n";
        return "";
    }

    SHA256_CTX sha256;
    SHA256_Init(&sha256);

    const size_t buffer_size = 4096;
    char buffer[buffer_size];
    while (file.read(buffer, buffer_size)) {
        SHA256_Update(&sha256, buffer, file.gcount());
    }
    SHA256_Update(&sha256, buffer, file.gcount()); // Process any remaining bytes

    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_Final(hash, &sha256);

    std::ostringstream hash_stream;
    for (unsigned char c : hash) {
        hash_stream << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(c);
    }

    return hash_stream.str();
}

// Function to load malware hash database from a file into a vector
void load_malware_database(const std::string& db_path, std::vector<std::string>& malware_hashes) {
    std::ifstream db_file(db_path);
    if (!db_file) {
        std::cerr << "Error: Unable to open the malware database at " << db_path << ". Please ensure the file path is correct.\n";
        return;
    }

    std::string hash;
    while (std::getline(db_file, hash)) {
        malware_hashes.push_back(hash);
    }
}

// Function to scan a directory for malware
void scan_directory(const std::string& directory, const std::vector<std::string>& malware_hashes) {
    std::ofstream report("malware_report.txt");
    if (!report) {
        std::cerr << "Error: Unable to create report file. Please check your permissions.\n";
        return;
    }

    report << "Malware Detection Report\n";
    report << "========================\n\n";
    report << "Scanned Directory: " << directory << "\n\n";

    bool found_malware = false;

    // Loop through the files in the directory recursively
    for (const auto& entry : fs::recursive_directory_iterator(directory)) {
        if (fs::is_regular_file(entry.path())) {
            std::string file_path = entry.path().string();
            std::cout << "Scanning file: " << file_path << "\n";

            std::string file_hash = compute_hash(file_path);
            if (file_hash.empty()) continue; // Skip if the file hash couldn't be computed

            // Check if the file's hash matches any malware hash in the database
            for (const auto& malware_hash : malware_hashes) {
                if (file_hash == malware_hash) {
                    std::cout << "Malware detected: " << file_path << "\n";
                    report << "Malware detected: " << file_path << "\n";
                    report << "Hash: " << file_hash << "\n\n";
                    found_malware = true;
                    break; // Stop scanning further for this file
                }
            }
        }
    }

    // If no malware was found, note it in the report
    if (!found_malware) {
        report << "No malware found in the scanned directory.\n";
    }

    std::cout << "Scan complete. Report has been saved to malware_report.txt.\n";
}

int main() {
    std::string directory, database;
    std::vector<std::string> malware_hashes;

    // User input for the directory to scan and the malware database
    std::cout << "Welcome to the Malware Detection Tool.\n";
    std::cout << "Please enter the path of the directory you want to scan: ";
    std::cin >> directory;

    std::cout << "Please enter the path of the malware hash database (text file with one hash per line): ";
    std::cin >> database;

    // Load the malware hash database
    load_malware_database(database, malware_hashes);
    if (malware_hashes.empty()) {
        std::cerr << "Error: The malware database is empty or could not be loaded. Please check the file path and try again.\n";
        return 1;
    }

    // Scan the directory for malware
    scan_directory(directory, malware_hashes);

    return 0;
}