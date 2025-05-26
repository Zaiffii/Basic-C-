#include<iostream>
using namespace std;
int main()
{
    int size, i;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int array[size];

    for(i=0; i<size; i++)
    {
        cout<<"Enter your Number "<<i+1<<": ";
        cin>>array[i];
    }

    cout<<"\tYour list before swapping\n";
    for(i=0; i<size; i++)
    {
        cout<<"Number "<<i+1<<": "<<array[i]<<endl;
    }

    int counter=1; //in first iteration it should be size-1
                    //in second iteration it should be size-2
                    //in third iteration it should be size-3
    while(counter<size)
    {
        for(i=0; i<size-counter; i++)
        {
            int temp;
            if(array[i]>array[i+1])//swaping according to asending order
            {
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        counter++;
    }

    cout<<"\tYour list after swapping\n";
    for(i=0; i<size; i++)
    {
        cout<<"Number "<<i+1<<": "<<array[i]<<endl;
    }
}