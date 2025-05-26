#include<iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int* start=arr;
    int* end=arr+size-1;
    int temp;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main()
{
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;

    int array[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Number "<<i+1<<" :";
        cin>>array[i];
    }

    cout<<"\tBefore Swapping\n";
    for(int i=0; i<size; i++)
    {
        cout<<"Number "<<i+1<<" :"<<array[i]<<endl;
    }
    reverse(array,size);

    cout<<"\tAfter Swapping\n";
        for(int i=0; i<size; i++)
        {
            cout<<"Number "<<i+1<<" :"<<array[i]<<endl;
        }
}