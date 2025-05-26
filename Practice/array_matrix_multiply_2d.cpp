#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    float matrix1[3][5];
    float matrix2[5][3];
    cout<<"\tEntering values in your first matrix: \n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            cout<<"Enter the number for your row "<<i<<" and column "<<j<<": ";
            cin>>matrix1[i][j];
        }
    }        

    cout<<"\tEntering values in your second matrix: \n";
    for(i=0; i<5; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<"Enter the number for your row "<<i<<" and column "<<j<<": ";
            cin>>matrix2[i][j];
        }
    }

    //intializing the 3rd matrix to zero
    float matrix3[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            matrix3[i][j]=0;
        }
    }

    //matrix multiplication
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<5; k++)//k represents 5 in matrix 1(columns) and in matrix 2(rows)
            {
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    cout<<"\tDisplaying Matrix 3\n";

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }
}