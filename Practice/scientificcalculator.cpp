#include<iostream>
using namespace std;
#include<math.h>
int main ()
{
    double number1; double number2; char operation; double result; double angle; double base; double exponent;
    cout<<"Press s for sin, c for cos, t for tan, / for divide, * for multiply, + for addition,\n\
    - for subtraction, p for power, r for square root, m for modulus";
    cout<<"Enter operation: ";
    cin>>operation;
//== is used to comapre values and characters need to be are written in ''
    if (operation=='s'||operation=='c'||operation=='t')
    {
       cout<<"Enter angle in degrees: ";
       cin>>angle;
    } 
    else if(operation=='/'||operation=='*'||operation=='+'||operation=='-')
    {    
    cout<<"Enter number1: ";
    cin>>number1;
    cout<<"Enter number2: ";
    cin>>number2;
    }
    else if(operation=='p')//POWER
    {
        cout<<"Enter base: ";
        cin>>base;
        cout<<"Enter exponent: ";
        cin>>exponent;
        result=pow(base,exponent);
        cout<<"Answer: "<<result<< endl;
    }
    else if(operation=='r')//SQUARE ROOT
    {
        cout<<"Enter number: ";
        cin>>number1;
        result=sqrt(number1);
        cout<<"Answer: "<<result<< endl;
    }
    else if(operation=='m')//MOD
    {
        cout<<"Enter number: ";
        cin>>number1;
        cout<<"Enter number: ";
        cin>>number2;
        double(result)=fmod(number1,number2);
        cout<<"Answer: "<<result<< endl;
    }
    if (operation=='/') // DIVIDE
    { 
        result=number1/number2;
        cout<<"Answer:" <<result<< endl;
    }
    else if (operation=='*') // MULTIPLY
    {
        result=number1*number2;
        cout<<"Answer:" <<result<< endl;
    }
    else if (operation=='+') // ADD
    {
        result=number1+number2;
        cout<<"Answer:" <<result<< endl;
    }
    else if (operation=='-') // SUB
    {
        result=number1-number2;
        cout<<"Answer:" <<result<< endl;
    }
    else if (operation=='s') // SIN why did we not write sin full ''
    {
       result=sin(angle);
       cout<<"Answer:" <<result<< endl;
    }
    else if (operation=='c') // COS why did we not write cos full
    {
       result=cos(angle);
       cout<<"Answer:" <<result<< endl;
    }
    else if(operation=='t') // TAN why did we not write tan full
    {
       result=tan(angle);
       cout<<"Answer:" <<result<< endl;
    }
}
//if we need to use else then we cannot write a 
//condition infront of it like operation==tan etc.
