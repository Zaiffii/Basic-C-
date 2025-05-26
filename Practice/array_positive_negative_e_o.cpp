#include<iostream>
using namespace std;
int main()
{
    int array[15];
    int i;
    for(i=0;i<15; i++)
    {
        cout<<"Enter Number "<<i+1<<": ";
        cin>>array[i];
    }
    for(i=0; i<15; i++)
    {
        if(array[i]>0)
            cout<<"Your Number: "<<array[i]<<" is positive\n";
        else if(array[i]<0)
            cout<<"Your Number: "<<array[i]<<" is negative\n";
        else
            cout<<"Your Number: "<<array[i]<<" is zero\n";
        if(array[i]%2==0)
            cout<<"Your Number: "<<array[i]<<" is even\n"; 
        else
            cout<<"Your Number: "<<array[i]<<" is odd\n";   
    }    
}