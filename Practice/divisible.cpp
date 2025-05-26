#include<iostream>
using namespace std;
#include<math.h>
int main()
{
 float no1,no2,ans;
 cout<<"Enter your first positive integer: ";
 cin>>no1;
 cout<<"Enter your second positive integer: ";
 cin>>no2;
 if(no1>no2)//if first no is greater than it should be the numerator
 {
    ans=fmod(no1,no2);//using modulus to check if this is exactly divisbile or not
    if(ans==0)
    {
        cout<<"This is exactly divisible";
    }
    else
    {
        cout<<"This is not exactly divisible";
    }
 }
 else//if second no is greater than it should be the numerator
 {
    ans=fmod(no2,no1);//using modulus to check if this is exactly divisbile or not
    if(ans==0)
    {
        cout<<"This is exactly divisible";
    }
    else
    {
        cout<<"This is not exactly divisible";
    }
 }
} 