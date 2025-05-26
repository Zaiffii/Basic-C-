#include<iostream>
using namespace std;
int main()
{
    int array[10];
    int i, largest, smallest;
    for(i=0; i<10; i++)
    {
        cout<<"Enter Number "<<i+1<<": ";
        cin>>array[i];
    }
    largest=array[0];
    smallest=array[0];
    for(i=1; i<10; i++)
    {
        if(array[i]>largest)
            largest=array[i];
        if(array[i]<smallest)
            smallest=array[i];    
    }
    cout<<"Largest Value: "<<largest<<endl;
    cout<<"Smallest Value: "<<smallest;
}