#include <iostream>
using namespace std;

int main() {
    int rows;
    char choice;

    do {
        cout << "Enter the number of rows for the Fibonacci pyramid: ";
        cin >> rows;

        // Initialize the first two numbers of the Fibonacci sequence
        int a = 0, b = 1, next;

        int count = 0; // Track how many Fibonacci numbers are printed
        for (int i = 1; i <= rows; ++i) {
            // Print leading spaces for alignment
            for (int j = 0; j < rows - i; ++j) {
                cout << "   ";
            }

            // Print Fibonacci numbers for the current row
            for (int j = 0; j < i; ++j) {
                if (count == 0) {
                    next = a;
                } else if (count == 1) {
                    next = b;
                } else {
                    next = a + b;
                    a = b;
                    b = next;
                }

                // Print the number with fixed spacing
                cout << next << " ";
                count++;
            }
            cout << endl; // Move to the next line after each row
        }

        // Ask if the user wants to generate another pattern
        cout << "Do you want to generate another pattern? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}