#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    for(n=1; n<=7; n++)
        cout<<"*";
    cout<<"\n";
    for(n=1; n<=7; n++)
    {
        cout<<"*";
        for(j=1; j<=5; j++)
        {
         if(n==4)
            cout<<"*";
         else    
            cout<<" ";
        }    
        cout<<"*\n";
    }         
    for(n=1; n<=7; n++)
        cout<<"*";
}