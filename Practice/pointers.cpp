#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int* b=&a;

    // printing address
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    //printing value
    cout<<"The value at a is: "<<a<<endl;
    cout<<"The value at a is: "<<*b<<endl;

    //making array
    int array[3];
    for(int i=0; i<3; i++)
    {
        cout<<"Enter your Number "<<i<<": ";
        cin>>array[i];
    }

    int* p=array;

    //printing address
    cout<<"The address of index 0 is: "<<p<<endl;
    cout<<"The address of index 1 is: "<<(p+1)<<endl;
    cout<<"The address of index 2 is: "<<(p+2)<<endl;

    //printing values
    cout<<"The value of index 0 is: "<<*p<<endl;
    cout<<"The value of index 1 is: "<<*(p+1)<<endl;
    cout<<"The value of index 2 is: "<<*(p+2)<<endl;

    //can also do it in loop e.g

    //printing addresses
    //for(int i=0; i<3; i++)
    // {
    //     cout<<"The address of index "<<i<<" is: "<<(p+i)<<endl;
    // }

    //printing values
    //for(int i=0; i<3; i++)
    // {
    //     cout<<"The value of index "<<i<<" is: "<<*(p+i)<<endl;
    // }
}    