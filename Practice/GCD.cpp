#include<iostream>
using namespace std;
int main()
{
    int no1,no2,remainder;
    cout<<"Enter your first number: ";
    cin>>no1;
    cout<<"Enter yoursecond number: ";
    cin>>no2;
    if(no1>no2)
    {
        while(no2!=0)
        {
        remainder=no1%no2;
        no1=no2;
        no2=remainder;
        }
    cout<<"Greatest Common Divisor: "<<no1;    
    }
    else
    {
        while(no1!=0)
        {
        remainder=no2%no1;
        no2=no1;
        no1=remainder;
        }
    cout<<"Greatest Common Divisor: "<<no2;
    }
}