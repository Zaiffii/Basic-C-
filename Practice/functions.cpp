#include<iostream>
using namespace std;
int sum(int a, int b);
void product(int c, int d);
int main()
{
    int no1,no2;
    cout<<"Please enter your first number: ";
    cin>>no1;
    cout<<"Please enter your second number: ";
    cin>>no2;
    cout<<"Answer: "<<sum(no1,no2);
    product(no1,no2);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result=a+b;
    return result;
}
void product(int c, int d)
{
    int result;
    result=c*d;
    cout<<"The result of multiplication = "<<result;
}