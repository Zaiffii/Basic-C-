#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    for(n=1; n<=7; n++)
    {
    for(i=1; i<=n; i++)
        cout<<"*";
    for(j=1; j<=5; j++)
        cout<<" ";    
    cout<<"*\n";
    }
}