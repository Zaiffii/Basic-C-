#include<iostream>
using namespace std;
int main()
{
    //WHILE LOOP
    cout<<"WHILE LOOP:";
    int i=0;
    while(i<=20)
    {
        cout<<i<<"!\n";
        i+=2;
    }

    cout<<"FOR LOOP:";
    for(i=1; i<=20; i++)
    {
        cout<<i<<"@\n";
    }

    do
    {
        cout<<"DO WHILE LOOP:\n";
        int i=1;
    }
    while(i<=10);
    {
          cout<<i<<"$\n";
        i+3;
    }    
}