#include<iostream>
using namespace std;
int main()
{
    int no,i,result,sum=0;
    cout<<"Enter your number: ";
    cin>>no;
    for(i=1; i<no; i++)
    {
        result=no%i;
        if(result==0)
        {
            sum=sum+i;
        }
    }
    if(sum==no)
    cout<<"Perfect Number";
    else if(sum>no)
    cout<<"Abundant";
    else
    cout<<"Defict";
    return 0;
}