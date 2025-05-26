#include<iostream>
using namespace std;
int main()
{
    double i,j,n;
    cout<<"      *\n";
    for(n=2; n<=7; n++)
    {
        for(i=7; i>n; i--)
            cout<<" ";
        cout<<"*";    
        for(j=2; j<=n*2; j++)
            cout<<"*";   
        cout<<"\n";                
    }
}    
