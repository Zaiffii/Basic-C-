#include<iostream>
using namespace std;
int main()
{
  int a,b,c,Disc;
  cout<<"Enter the coefficient of x^2: ";
  cin>>a;
  cout<<"Enter the coefficient of x: ";
  cin>>b;
  cout<<"Enter your constant: ";
  cin>>c;
  Disc=(b*b)-(4*a*c); //Formula of Discriminat
  cout<<Disc<<"\n";
  if(Disc>0) //Condition for real roots
  {
    cout<<"Roots are real!"; 
  } 
  else if(Disc==0) //Condition for equal roots
  {
    cout<<"Roots are equal!";
  } 
  else // If its not equal not real then it must be imaginary
  {
    cout<<"Roots are imaginary";
  } 
}