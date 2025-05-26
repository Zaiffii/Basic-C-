#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void length(string name)
{
    cout<<"The length is: "<<name.length();
}
void word(string name)
{
    string word;
    int count=0;
    istringstream stream(name);
    while(stream>>word)
        count++;
    cout<<"The number of words are: "<<count<<endl;   
}
void letter(string name)
{
    int count=0;
    for (char c: name)
    {
        if(isalpha(c))
            count++;   
    }
    cout<<"The number of letters are: "<<count<<endl;
}
void lower(string name)
{
    for(int i=0; i<name.length(); i++)
        name[i]=tolower(name[i]);
    cout<<"Lower case: "<<name;   
}    
void upper(string name)
{
    for(int i=0; i<name.length(); i++)
        name[i]=toupper(name[i]);
    cout<<name;
}
void change(string name)
{
    for(int i=1; i<name.length(); i++)
    {
        if(isupper(name[i]))
            name[i]=tolower(name[i]);
        else if(islower(name[i]))
            name[i]=toupper(name[i]);    
    }
}    
int main()
{
    string name;
    int choice;
    cout<<"Enter your name: ";
    cin>>name;

    cout<<"\tMENU\n";
    cout<<"Press 1 to Calculate length of string\n";
    cout<<"Press 2 to Count number of words in string\n";
    cout<<"Press 3 to Count number of words in string\n";    
    cout<<"Press 4 to Convert a string in lowercase\n";
    cout<<"Press 5 to Convert a string in uppercase\n";
    cout<<"Press 6 to interchange upper and lower case\n";

    cout<<"What do you want to do: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            length(name);
        break;

        case 2:
            word(name);
        break;

        case 3:
            letter(name);
        break; 

        case 4:
            lower(name);
        break;

        case 5:
            upper(name);
        break;

        case 6:
            change(name);
        break;

        default:
            cout<<"Invalid choice";                
    }
    
}