#include<iostream>
using namespace std;
#include<math.h>
int main ()
{
   int Rz1; int Rz2; int Im1; int Im2; char operation; int Rz; int Im;
   cout<<"Press * for multiply, + for addition, - for subtraction, i for increment,\n\
   d for decrement, m for modulus";
   cout<<"Enter your operation: ";
   cin>>operation;
   if (operation=='i' || operation=='d')
   {
    cout<<"Enter your Real part of 1st complex number: ";
    cin>>Rz1;
    cout<<"Enter your imaginary part of 1st complex number: ";
    cin>>Im1;
   }
   else
   {
    cout<<"Enter your Real part of 1st complex number: ";
    cin>>Rz1;
    cout<<"Enter your imaginary part of 1st complex number: ";
    cin>>Im1;
    cout<<"Enter your Real part of 2nd complex number: ";
    cin>>Rz2;
    cout<<"Enter your imaginary part of 2nd complex number: ";
    cin>>Im2;
   }
   
  if(operation=='*')//MULTIPLY
   {
    Rz=Rz1*Rz2 - Im1*Im2;
    Im=Rz1*Im2 + Im1*Rz2; 
    cout<<Rz<<"+"<<Im<<"i";
   }
  else if(operation=='+')//ADD
  {
    Rz=Rz1+Rz2;
    Im=Im1+Im2;
    cout<<Rz<<"+"<<Im<<"i";
  }
  else if(operation=='-')//SUBTRACT
  {
    Rz=Rz1-Rz2;
    Im=Im1-Im2;
    cout<<Rz<<"+"<<Im<<"i";
  }
  else if(operation=='i')//INCREMENT
  {
    Rz=++Rz1;
    Im=++Im1;
    cout<<Rz<<"+"<<Im<<"i";
  }
  else if(operation=='d')//DECREMENT
  {
    Rz=--Rz1;
    Im=--Im1;
    cout<<Rz<<"+"<<Im<<"i";
  }
  else if(operation=='m')//MODULUS
  {
    Rz=Rz1%Rz2;
    Im=Im1%Im2;
    cout<<Rz<<"+"<<Im<<"i";
  }
}