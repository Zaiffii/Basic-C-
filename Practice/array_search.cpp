#include<iostream>
using namespace std;
int main()
{
    int size, i, search;
    cout<<"Enter the size of the list: ";
    cin>>size;
    int array[size];
    for(i=0;i<size; i++)
    {
        cout<<"Enter Number "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<"Enter the element you want to search for: ";
    cin>>search;
    for(i=0; i<size; i++)
    {
        if(array[i]==search)
            cout<<"The eleement you searched for is at index: "<<i;
    }
}