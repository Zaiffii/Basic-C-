#include<iostream>
using namespace std;
int main()
{
    int size, i, m;
    cout<<"Enter the size of the list: ";
    cin>>size;
    int array[size];
    for(i=0;i<size; i++)
    {
        cout<<"Enter Number "<<i+1<<": ";
        cin>>array[i];
    }
    m=array[0];
    array[0]=array[size-1];
    array[size-1]=m;
    cout<<"After swapping the first value becomes: "<<array[0]<<endl;
    cout<<"After swapping the last value becomes: "<<array[size-1];
}
