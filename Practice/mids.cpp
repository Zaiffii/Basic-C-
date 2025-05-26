#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int operation, i;
    double no1, no2, result;
    string choice;

    do 
    {
        cout<<"Press 1 for Addition\n";
        cout<<"Press 2 for Subtraction\n";
        cout<<"Press 3 for Multiplication\n";
        cout<<"Press 4 for Division\n";
        cout<<"Press 5 for Determine Even/Odd\n";
        cout<<"Press 6 for Determine Prime\n";
        cout<<"Press 7 for Multiplication Table\n";
        cout<<"Press 8 to Exit\n";
        cout<<"Choose the operation you want to perform: ";
        cin>>operation;

        switch (operation) 
        {
            case 1:
                cout<<"Please enter your first number: ";
                cin>>no1;
                cout<<"Please enter your second number: ";
                cin>>no2;
                if(no1<= 0 || no2<= 0) 
                {
                    cout<<"Please enter positive numbers.\n";
                    break;
                }
                result=no1+no2;
                cout<<"Answer: "<< result;
                break;

            case 2:
                cout<<"Please enter your first number: ";
                cin>>no1;
                cout<<"Please enter your second number: ";
                cin>>no2;
                if(no1<= 0||no2<= 0) 
                {
                    cout<<"Please enter positive numbers.\n";
                    break;
                }
                result=no1-no2;
                cout<<"Answer: "<<result;
                break;

            case 3:
                cout<<"Please enter your first number: ";
                cin>>no1;
                cout<<"Please enter your second number: ";
                cin>>no2;
                if(no1 <= 0 || no2 <= 0) 
                {
                    cout<<"Please enter positive numbers.\n";
                    break;
                }
                result=no1*no2;
                cout<<"Answer: "<<result;    
                break;

            case 4:
                cout<<"Please enter your first number: ";
                cin>>no1;
                cout<<"Please enter your second number: ";
                cin>>no2;
                if(no1 <= 0 || no2 <= 0) 
                {
                    cout<<"Please enter positive numbers.\n";
                    break;
                }
                result=no1/no2;
                cout<<"Answer: "<<result;    
                break;

            case 5:
                cout<<"Please enter the number you want to check for even or odd: ";
                cin>>no1;
                if(no1 <= 0) 
                {
                    cout<<"Please enter a positive number.\n";
                    break;
                }
                result=fmod(no1, 2);
                if (result== 0) 
                {
                    cout<<"You have entered an even number\n";
                    result=fmod(no1, 4);
                    if(result== 0)
                     {
                        cout<<"This number is also divisible by 4\n";
                    }
                } 
                else 
                {
                    cout<<"You have entered an odd number\n";
                    for(i = 1; i <= no1; i++)
                    {
                        result=fmod(no1, i);
                        if(result == 0) 
                        {
                            break;
                        }
                    }
                    if(i == 1 && i == no1) {
                        cout<<"Your number is also prime\n";
                    }
                }
                break;

            case 6:
                cout<<"Please enter the number for which you want to check if it is Prime or not: ";
                cin>>no1;
                if(no1<= 0) 
                {
                    cout<<"Please enter a positive number.\n";
                    break;
                }

                for (i = 2; i <= sqrt(no1); i++) 
                {
                    if (fmod(no1, i) == 0) 
                    {
                        cout<<"Your number is not a prime number\n";
                        break;
                    }
                }
                if (i > sqrt(no1)) 
                {
                    cout<<"Your number is a prime number\n";
                }
                break;

            case 7:
                do {
                    cout << "Enter the number for which you want to print the multiplication table: ";
                    cin >> no1;
                    if (no1 <= 0) {
                        cout << "Please enter a positive number.\n";
                        break;
                    }

                    for (i = 1; i <= 10; i++) {
                        result = no1 * i;
                        cout << no1 << " x " << i << " = " << result << endl;
                    }

                    cout << "Do you want to print another table? (Yes/No): ";
                    cin >> choice;
                } while (choice == "Yes" || choice == "yes");
                break;

            case 8:
                cout << "Thank you for using the calculator\n";
                break;

            default:
                cout << "Please choose a valid operation from the Menu shown above\n";
                break;
        }
            cout << "\nDo you want to perform another operation? (Yes/No): ";
            cin >> choice;
    } while (choice == "Yes" || choice == "yes");

    cout << "Thank you for using the calculator\n";
    return 0;
}
