#include<iostream>
using namespace std;
int main()
{
    string name;
    string lastname;
    string fullname;
    cout<<"Enter your first name: ";
    getline(cin,name);
    cout<<"Enter your last name: ";
    getline(cin,lastname);
    fullname=name+lastname;
    cout<<fullname<<endl;

    cout<<name[0]<<endl;
    
    //name=ali
    //name[4] equals ‘\0’;

    //string can also by comparedby changing into ASCII values even the space has its own ASCII value
    if(name>lastname)
        cout<<name<<" > "<<lastname<<endl;
    
    else if(name<lastname)
        cout<<name<<" < "<<lastname<<endl;
    
    else
        cout<<name<<" = "<<lastname<<endl;

    //Finding length 
    cout<<name.length();    
}