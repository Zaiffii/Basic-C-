#include<iostream>
using namespace std;
int main()
{
    int rows, columns, i, j,counter=1, total_elements, row, column, row1, column1, temp;
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
    total_elements=rows*columns;
    while(counter<total_elements)
    {
        for(int k=0; k<total_elements-counter; k++)
        {
            row=k/columns;
            column=k%columns;
            row1=(k+1)/columns;
            column1=(k+1)%columns;
            if(array[row][column]>array[row1][column1])
            {
                temp=array[row][column];
                array[row][column]=array[row1][column1];
                array[row1][column1]=temp;
            }
        }
        counter++;
    }

    cout<<"\tAfter Sorting\n";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
            cout<<array[i][j]<<" ";
        cout<<"\n";    
    }
}