#include<iostream>
using namespace std;
int main()
{
    int marks[10];
    int i, sum=0, average, j, temp;
    cout<<"\tEntering marks of students: \n";
    for(i=0; i<10; i++)
    {
        cout<<"Marks of student "<<i+1<<" :";
        cin>>marks[i];
    }

    cout<<"\tThe list is\n";
    for(i=0; i<10; i++)
        cout<<"Marks of student "<<i+1<<" :"<<marks[i]<<endl;

    for(i=0; i<10; i++)
        sum=sum+marks[i];

    average=sum/10;

    //Sorting the array to find the min and max value
    for(i=0; i<10-1; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(marks[i]>marks[j])
            {
                temp=marks[i];
                marks[i]=marks[j];
                marks[j]=temp;
            }
        }
    }

    //Displaying results
    cout<<"Sum: "<<sum<<endl;
    cout<<" Average: "<<average<<endl;
    cout<<"Minimun Marks: "<<marks[0]<<endl;
    cout<<"Maximum Marks: "<<marks[9];    
}