#include<iostream>
using namespace std;
int main()
{
    int rows, columns, i, j, k, l, temp;
    cout<<"Enter the size of rows: ";
    cin>>rows;
    cout<<"Enter the size of columns: ";
    cin>>columns;
    int array[rows][columns];

    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            cout<<"Enter the number in row "<<i+1<<" and column "<<j+1<<" :";
            cin>>array[i][j];
        }
    }
    cout<<"\tBefore Sorting\n";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
            cout<<array[i][j]<<" ";
        cout<<"\n";    
    }

    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            for(k=0; k<rows; k++)
            {
                for(l=0; l<columns; l++)
                {
                    if(array[k][l]>array[i][j])// i j represents the current elements and k l repesents all the other elements to whom they are compared to
                    {
                        temp=array[i][j];
                        array[i][j]=array[k][l];
                        array[k][l]=temp;
                    }
                }
            }
        }
    }

   cout<<"\tAfter Sorting\n";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
            cout<<array[i][j]<<" ";
        cout<<"\n";    
    } 
}