#include<iostream>
using namespace std;
void initializeArray(int* arr, int size)
{
    cout<<"\tInitialzing the array to 0\n";
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
    cout<<"\tInputing the values in the array\n";
    int* start=arr;
    int* end=arr+size-1;
    while(start<=end)
    {
        cout<<"Number: ";
        cin>>*start;
        start++;
    }
}
void reverseArray(int* arr, int size)
{
    cout<<"\tThe reverse array is\n";
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
void findMaxMin(int* arr, int size)
{
    cout<<"Finding the minimum and maximum vales\n";
    int i,j,temp;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int* start=arr;
    int* end=arr+size-1;
    cout<<"The minimum value is: "<<*start<<endl;
    cout<<"The maximum value is: "<<*end<<endl;
}
void printArray(int* arr, int size)
{
    int* start=arr;
    int* end=arr+size-1;
    while(start<=end)
    {
        cout<<"Number: "<<*start<<endl;
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
    printArray(array,size);

    //input values into Array
    inputArray(array,size);

    //outputing the initialized array
    printArray(array,size);

    //reversing the array
    reverseArray(array,size);

    //outputing the initialized array
    printArray(array,size);

    //finding minimum and maximum
    findMaxMin(array,size);
}