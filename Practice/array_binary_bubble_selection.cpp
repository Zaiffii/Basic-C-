#include<iostream>
using namespace std;
void bubble(int arr[], int size)
{
    int counter=1, i, temp;
    while(counter<size)
    {
        for(i=0; i<size-counter; i++)//SIZE-COUNTER
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
}
void selection(int arr[], int size)
{
    int i, j, temp;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
}
void binary(int arr[], int size, int targ)
{
    int start=0, end=size-1, mid;
    bool found=false;
    while(!found && start<=end)
    {
        mid=start+(end-start)/2;
        if(targ>arr[mid])
            start=mid+1;
        else if(targ<arr[mid])
            end=mid-1;
        else
        {
            found=true;
            cout<<"Your target is at index: "<<mid<<endl;
        }    
    } 
}
int main()
{
    int size, i, target;
    cout<<"Enter the size of your list: ";
    cin>>size;

    int array[size];
    for(i=0; i<size; i++)
    {
        cout<<"Enter your number for index: "<<i<<" :";
        cin>>array[i];
    }

    cout<<"\tYour array before sorting\n";
    for(i=0; i<size; i++)
        cout<<"Your Number at index "<<i<<" :"<<array[i]<<endl;

    selection(array, size);

    cout<<"\tYour array after sorting\n";
    for(i=0; i<size; i++)
        cout<<"Your Number at index "<<i<<" :"<<array[i]<<endl;

    cout<<"Enter the element you want to find out: ";
    cin>>target;

    binary(array, size, target);
}