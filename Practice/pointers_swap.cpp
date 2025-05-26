#include<iostream>
using namespace std;
void swap(int* n1, int* n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main()
{
    int no1,no2;
    cout<<"Enter your number: ";
    cin>>no1;
    cout<<"Enter your number: ";
    cin>>no2;
    swap(no1, no2);
    cout<<"Number 1: "<<no1<<endl;
    cout<<"Number 2: "<<no2<<endl;
}