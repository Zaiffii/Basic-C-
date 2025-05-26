#include<iostream>
using namespace std;

int main()
{
  double no1,no2,no3;
  cout<<"Enter your First number: ";
  cin>>no1;
  cout<<"Enter your Second number: ";
  cin>>no2;
  cout<<"Enter your Third number: ";
  cin>>no3;
  //Conditions for maximun
  if(no1>no2 && no1>no3)//First number is maximum
  {
  cout<<no1<<" Is maximum and ";
  } 
  else if(no2>no1 && no2>no3)//Second number is maximum
  {
  cout<<no2<<" Is maximum and ";
  }
  else if(no3>no1 && no3>no2)//Third number is maximum
  {
  cout<<no3<<" Is maximum and ";
  }
//Conditions for minimum
  if(no1<no2 && no1<no3)//First number is minimum
  {
  cout<<no1<<" Is minimum";
  } 
  else if(no2<no1 && no2<no3)//Second number is minimum
  {
  cout<<no2<<" Is minimum";
  }
  else if(no3<no1 && no3<no2)//Third number is minimum
  {
  cout<<no3<<" Is minimum";
  }
  else //All numbers are equal
  {
   cout<<"All the numbers are equal!"; 
  }
  return 0;
}