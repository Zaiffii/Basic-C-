#include<iostream>
using namespace std;

int main()
{
   int age;
   cout<<"Please enter your age: ";
   cin>>age;
   if(age<18) //Condition for child
   {
    cout<<"CHILD";
   } 
   else if(age>=18 && age<35) //Condition for adult
   {
    cout<<"ADULT";
   }
   else //If it's not child nor adult then it must be senior
   {
    cout<<"SENIOR";
   }
}