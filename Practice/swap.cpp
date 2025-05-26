#include<iostream>
using namespace std;
void swap(double &x, double &y);
int main()
{
    double no1,no2;
    cout<<"Please enter your first number: ";
    cin>>no1;
    cout<<"Please enter your second number: ";
    cin>>no2;
    cout<<"Before swapping Number 1 = "<<no1<<"and Number2 = "<<no2<< endl;
    swap(no1,no2);
    cout<<"After swapping Number 1 = "<<no1<<" and Number2 = "<<no2<< endl;

    return 0;
}
void swap(double &x, double &y)
{
    double a;
    a=x;
    x=y;
    y=a;
    // cout<<x;
    // cout<<y;
    // cout<<"After swapping Number 1 = "<<x<<"and Number2 = "<<y<< endl;

}