#include <iostream>
#include <math.h>
using namespace std;

struct Student 
{
    string name;
    float grade1,grade2,grade3;
};

int main() 
{
    Student student;
    int operation;
    string choice;

    do {
        cout << "Press 1  to Add Student Record (Name and Grades)\n";
        cout << "Press 2 to Calculate Average Grade\n";
        cout << "Press 3 to Find Highest and Lowest Grades\n";
        cout << "Press 4 to Determine Pass/Fail (Average Grade >= 50)\n";
        cout << "Press 5 to Generate Report of Student Grades\n";
        cout << "Press 6 to Exit\n";
        cout << "Please select what do you want to do: ";
        cin >> operation;

        switch (operation) 
        {
            case 1: {
                cout << "Enter student name: ";
                cin.ignore();
                getline(cin, student.name);
                cout << "Enter grade for subject 1: ";
                cin >> student.grade1;
                while (student.grade1 < 0 || student.grade1 > 100) {
                    cout << "Invalid grade. Please enter a grade between 0 and 100: ";
                    cin >> student.grade1;
                }

                cout << "Enter grade for subject 2: ";
                cin >> student.grade2;
                while (student.grade2 < 0 || student.grade2 > 100) {
                    cout << "Invalid grade. Please enter a grade between 0 and 100: ";
                    cin >> student.grade2;
                }

                cout << "Enter grade for subject 3: ";
                cin >> student.grade3;
                while (student.grade3 < 0 || student.grade3 > 100) {
                    cout << "Invalid grade. Please enter a grade between 0 and 100: ";
                    cin >> student.grade3;
                }
                cout << "Student record added successfully.\n";
                break;
            }

            case 2: {
                if (student.grade1 >= 0 && student.grade2 >= 0 && student.grade3 >= 0) {
                    float average = (student.grade1 + student.grade2 + student.grade3) / 3;
                    cout << "Average grade for " << student.name << ": " << average << endl;
                } else {
                    cout << "No student record found. Please add a record first.\n";
                }
                break;
            }

            case 3: {
                if (student.grade1 >= 0 && student.grade2 >= 0 && student.grade3 >= 0) {
                    float highest = max(student.grade1, max(student.grade2, student.grade3));
                    float lowest = min(student.grade1, min(student.grade2, student.grade3));

                    cout << "Highest grade: " << highest << endl;
                    cout << "Lowest grade: " << lowest << endl;
                } else {
                    cout << "No student record found. Please add a record first.\n";
                }
                break;
            }

            case 4: {
                if (student.grade1 >= 0 && student.grade2 >= 0 && student.grade3 >= 0) {
                    float average = (student.grade1 + student.grade2 + student.grade3) / 3;
                    if (average >= 50) {
                        cout << student.name << " has passed.\n";
                    } else {
                        cout << student.name << " has failed.\n";
                    }
            }

            case 6:
                cout << "Exiting the program...\n";
                break;

            default:
                cout << "Invalid option. Please choose a valid option between 1 and 6.\n";
                break;
        }

        if (operation != 6) {
            cout << "\nDo you want to perform another operation? (yes/no): ";
            cin >> choice;
        }

    } while (choice == "yes" || choice == "Yes");
    return 0;
}
