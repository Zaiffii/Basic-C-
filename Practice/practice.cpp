#include<iostream>
using namespace std;
void initializeArray(int* arr, int size)
{
    int* start=arr;
    int* end=arr+size-1;
    while(start<=end)
    {
        *start=0;
        *end=0;
        start++;
    }
    
}
void inputArray(int* arr, int size)
{
    int* start=arr;
    int* end=arr+size-1;
    int count=1;
    while(start<=end)
    {
        cout<<"Enter your number "<<count<<": ";
        cin>>*start;
        count++;
        start++;
    }
}
void reverseArray(int* arr, int size)
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
void findMinMax(int* arr, int size)
{
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int* min=arr;
    int* max=arr+size-1;
    cout<<"Minimun value: "<<*min<<endl;
    cout<<"Maximum value: "<<*max<<endl;
}
void outputArray(int* arr, int size)
{
    int* start=arr;
    int* end=arr+size-1;
    int count=1;
    while(start<=end)
    {
        cout<<"Number "<<count<<" :"<<*start<<endl;
        count++;
        start++;
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int array[size];
    //initializing array
    initializeArray(array,size);

    //outputing the initialized array
    cout<<"\tThe initialized array is: \n";
    outputArray(array,size);

    //input values into Array
    inputArray(array,size);

    //outputing the initialized array
    cout<<"\tThe inputed array is\n";
    outputArray(array,size);

    //reversing the array
    reverseArray(array,size);

    //outputing the initialized array
    cout<<"\tThe reversed array is: \n";
    outputArray(array,size);

    //finding minimum and maximum
    findMinMax(array,size);
}