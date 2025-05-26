#include<iostream>
using namespace std;
int main()
{
    //``````STRUCTURE```````
    typedef struct student
    {
        int id;
        string name;
        int rollno;
    } st;

    st students[3];
    for(int i=0; i<3; i++)
    {
        cout<<"Id: ";
        cin>>students[i].id;
        cout<<"Name: ";
        cin>>students[i].name;
        cout<<"Roll No: ";
        cin>>students[i].rollno; 
    }

    for(int i=0; i<3; i++)
    {
        cout<<"Your Id of student "<<i+1<<" is: "<<students[i].id<<endl;
        cout<<"Your Name of student "<<i+1<<" is: "<<students[i].name<<endl;
        cout<<"Your Roll No of student "<<i+1<<" is: "<<students[i].rollno<<endl;
    }

    //```````UNION````````````
    union money
    {
        int rice;
        char car;
        float dollar;
    };

    union money m1;
    m1.rice=9;
    cout<<m1.rice;

    m1.car='c';
    cout<<m1.car;

    m1.dollar=99;
    cout<<m1.dollar;

    //`````````````````ENUM```````````````````
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;
}