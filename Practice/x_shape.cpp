#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    for(n=1; n<=7; n++)
    {
        for(i=1; i<=n; i++)
            cout<<" ";
        cout<<"*";
        for(j=3; j>=n; j--)
            cout<<" ";
        cout<<"*\n";
    }
}