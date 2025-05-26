#include<iostream>
using namespace std;
int main()
{
    int i,result=1;
    for(i=1; i<=15; i+=2) //increment by any number greater than 1 is done like this
    {
        result=result*i;
    }
    cout<<"Answer: "<<result<< endl;
}