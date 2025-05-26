#include<iostream>
using namespace std;
int main()
{
    int array[7];
    int target;
    cout<<"\tEntering values in your list\n";
    for(int i=0 ; i<7; i++)
    {
        cout<<"Enter your "<<i+1<<" number: ";
        cin>>array[i];
    }
    cout<<"Enter the element you want to find out: ";
    cin>>target;
    int start=0,  end=7-1, mid;
    bool found=false;
    while(!found && start<=end)
    {
        mid=start+(end-start)/2;
        if(target>array[mid])
            start=mid+1;
        else if(target<array[mid])
            end=mid-1;
        else    //agr start aur end less bhi nhi hai greater bhi nhi hai tou equal hi hoga
        {
            found=true;
            cout<<mid;
        }            
    }
}