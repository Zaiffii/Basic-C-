#include<iostream>
using namespace std;
int main()
{
    int no1,no2,a,b,remainder,GCD,LCM;
    cout<<"Enter your first number: ";
    cin>>no1;
    cout<<"Enter your second number: ";
    cin>>no2;
    a=no1;
    b=no2;
    if(no1>no2)
    {
        while(no2!=0)
        {
          remainder=no1%no2;
          no1=no2;
          no2=remainder;
        }
        GCD=no1;
        LCM=(a*b)/GCD; //the values of no1 & no2 are changed for the calculation of GCD in the forumula of LCM the multiplication of original no1&no2 is required
        cout<<"Least Common Multiplier: "<<LCM;  
    }
    else
    {
        while(no1!=0)
        {
          remainder=no2%no1;
          no2=no1;
          no1=remainder;
        }
        GCD=no2;
        LCM=(a*b)/GCD; //the values of no1 & no2 are changed for the calculation of GCD in the forumula of LCM the multiplication of original no1&no2 is required
        cout<<"Least Common Multiplier: "<<LCM; 
    }
}