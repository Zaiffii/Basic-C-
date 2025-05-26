#include<iostream>
using namespace std;
int main ()
{
 char grade;
    cout<<"Please enter your grade: ";
    cin>>grade;
    if(grade=='A') // We will use'A' to tell the compiler that it is not a constant but a character
    {
      cout<<"Excellent";
    }
    else if(grade=='B') //== is used to compare the values inside if
    {
        cout<<"Good";
    }
    else if(grade=='C')
    {
        cout<<"Fair";
    }
    else if(grade=='D')
    {
        cout<<"Poor";
    }
    else if(grade=='F')
    {
        cout<<"Failure";
    }
    else //If the user enters any other grade than A,B,C,D,F
    {
        cout<<"Invalid Grade Please enter the grade from A-F in capital";
    }
}