#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"        *\n";
    for(n=1; n<=7; n++)
    {
        for(i=7; i>n; i--)
            cout<<" ";
        cout<<"*";
        
        for(j=1; j<=n*2; j++)
        {
            if(n==3)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"*\n";


    }
}