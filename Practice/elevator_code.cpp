#include<iostream>
#include<string>//for lowercase
#include<algorithm>//for to transform
using namespace std;

int main() {
    string choice, password;
    int flor, targetflor;

    // Checking if you are a faculty member or not
    cout << "Are you a faculty member? Yes(y)/No(n): ";
    cin >> choice;
// Convert input to lowercase
    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
    if (choice == "y" || choice == "yes") {
        cout << "Enter your password: ";
        cin >> password;

        if (password == "admin") { // Checking password
            cout << "WELCOME!\n";
            cout << "First floor\n";
            cout << "Second floor\n";
            cout << "Third floor\n";
            cout << "Fourth floor\n";

            // Input current floor
            cout << "Enter your current floor (1-4): ";
            cin >> flor;

            // Validate current floor
            if (flor < 1 || flor > 4) {
                cout << "Please select a floor between 1-4.\n";
                return 1;
            }

            // Input target floor
            cout << "Choose your desired floor (1-4): ";
            cin >> targetflor;

            // Validate target floor
            if (targetflor < 1 || targetflor > 4) {
                cout << "Please select a floor between 1-4.\n";
                return 1;
            }

            cout << "Elevator is moving to floor " << targetflor << ".\n";

            // Conditions for elevator movement
            if (flor == targetflor) {
                cout << "You are already on this floor. Have a nice day!\n";
            } 
            // Moving up
            else if (targetflor > flor) {
                cout << "You are moving up...\n";
                for (int i = flor + 1; i <= targetflor; i++) {
                    cout << "Floor " << i << endl;
                }
                cout << "You have reached floor " << targetflor << ". Have a nice day!\n";
            } 
            // Moving down
            else {
                cout << "You are moving down...\n";
                for (int i = flor - 1; i >= targetflor; i--) {
                    cout << "Floor " << i << endl;
                }
                cout << "You have reached floor " << targetflor << ". Have a nice day!\n";
            }
        } else {
            cout << "Incorrect password. Access denied.\n";
        }
    } else {
        cout << "You need to be a faculty member to access this elevator.\n";
    }

    return 0;
}