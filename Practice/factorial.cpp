#include<iostream>
using namespace std;
int main()
{
    int no,i,Answer=1;
    cout<<"Enter your number: ";
    cin>>no;
    for(i=no; i>=1; i--)
    {
    Answer=Answer*i;
    }
    cout<<"The factorial of "<<no<<"is: "<<Answer;
}