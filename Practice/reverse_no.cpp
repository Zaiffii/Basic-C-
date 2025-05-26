#include<iostream>
using namespace std;
int main()
{
    int no,length,i=1,quotient,remainder,reverse=0;
    string a;
    cout<<"Enter your number: ";
    cin>>no;
    a=to_string(no);
    length=a.length();
    while(i<=length)
    {
    quotient=no/10;
    remainder=no%10;
    reverse=reverse*10+remainder;
    no=quotient;
    i++;
    }
    if(to_string(reverse)==a)//we can compare string with string
        cout<<"The number is a palindrome";
    else
        cout<<"The number is not a palindrome";    
}
