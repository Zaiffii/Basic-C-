#include<iostream>
using namespace std;
void bubble(int arr[][], int rows, int columns)
{
    int counter=1, total_elements, i, row, column, row1, column1,temp;
    total_elements=rows*columns;
    while(counter<total_elements)
    {
        for(i=0; i<total_elements-counter; i++)
        {
            row=i/columns;
            column=i%columns;
            row1=(i+1)/columns;
            column1=(i+1)%columns;
            if(arr[row][column]>arr[row1][column1])
            {
                temp=arr[row][column];
                arr[row][column]=arr[row1][column1];
                arr[row1][column1]=temp;
            }
        }
        counter++;
    }
}
void selection(int arr[][], int rows, int columns)
{
    int i, j, k, l, temp;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            for(k=0; k<rows; k++)
            {
                for(l=0; l<columns; l++)
                {
                    if(arr[k][l]>arr[i][j])
                    {
                        temp=arr[k][l];
                        arr[k][l]=arr[i][j];
                        arr[i][j]=temp;
                    }
                }
            }
        }
    }
}
void binary(int arr[][], int rows, int columns, int targ)
{
    int start=0, end=rows*columns-1, mid, row, column;
    bool found=false;
    while(!found && start<=end)
    {
        mid=start+(end-start)/2;
        row=mid/columns;
        column=mid%columns;
        if(targ>arr[row][column])
            start=mid+1;
        else if(targ<arr[row][column])
            end=mid-1;
        else
        {
            found=true;
            cout<<"The target is at index: "<<row<<" "<<column<<endl;
        }
    }
}
int main()
{
    int rows, columns, i, j, target;
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

    selection(array, rows, columns);

    cout<<"\tAfter Sorting\n";
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
            cout<<array[i][j]<<" ";
        cout<<"\n";    
    }

    cout<<"Enter the target you want to find: ";
    cin>>target;

    binary(array, rows, columns, target);
}