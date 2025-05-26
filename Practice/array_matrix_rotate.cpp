#include<iostream>
using namespace std;
int main()
{
    int array[10][10];

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<"Enter your number for row "<<i<<" and column "<<j<<" : ";
            cin>>array[i][j];
        }
    }

    cout<<"\t displaying the array";
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    int matrix2[10][10];
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            matrix2[10-j-1][i]=array[i][j];
        }
    }

    cout<<"Displaying rotated matrix: ";
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
}