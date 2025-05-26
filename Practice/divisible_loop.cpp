#include<iostream>
using namespace std;
int main()
{
    int i,result,multiply=1,add;
    for(i=1; i<=25; i++)
    {
        result=i%5;
        if(result==0)
        {
            multiply=multiply*i;
        }
    }
    cout<<"The product of the integers from 1 to 25 which are divisible by 5 is: "<<multiply;
}