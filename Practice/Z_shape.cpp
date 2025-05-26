#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    for(N=1; N<=20; N++)
        cout<<"*";//print first line
    cout<<"\n";

    for(N=1; N<=10; N++)
    {
        for(i=20; i>(N*2); i--)
            cout<<" ";
        cout<<"*\n"; 
    }
    for(N=1; N<=20; N++)
        cout<<"*";//print last line   
}
