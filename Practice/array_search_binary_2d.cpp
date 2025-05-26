#include<iostream>
using namespace std;
int main()
{
    int rows, columns, i, j, target, start, end, mid;
    bool found=false;
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

    cout<<"Enter the element you want to search for: ";
    cin>>target;

    start=0;
    end=rows*columns-1;
    while(!found && start<=end)
    {
        mid=start+(end-start)/2;
        int row,column;
        row=mid/column;
        column=mid%column;
        if(target>array[row][column])
            start=mid+1;
        if (target<array[row][column])
            end=mid-1;
        else
        {
            found=true;
            cout<<"Element found at index "<<row+1<<" "<<column+1<<endl;
        }        
    }
}