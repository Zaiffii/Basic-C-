#include<iostream>
using namespace std;
struct student
{
    int id;
    string name;
    int rollno;
};
void input_array(student students[])//here the student that was made as a struct act as the data type
{
    int i;
    for(i=0; i<2; i++)
    {
        cout<<"Id: ";
        cin>>students[i].id;
        cout<<"Name: ";
        cin>>students[i].name;
        cout<<"Roll No: ";
        cin>>students[i].rollno;
    }
}
void output_array(student students[])
{
    int i;
    for(i=0; i<2; i++)
    {
        cout<<"Id: "<<students[i].id<<endl;
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"Roll no: "<<students[i].rollno<<endl;
    }    
}
int main()
{
    student students[2];
    input_array(students);
    output_array(students);
}