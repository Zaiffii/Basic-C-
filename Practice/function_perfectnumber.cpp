#include<iostream>
using namespace std;
void perfect_number(int low, int upp)
{
    int i, j, sum;
    for(i=low; i<=upp; i++)
    {
        sum=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i)
                {
                    cout<<"Perfect Number: "<<i<<endl;
                }
    }
}
int main()
{
    int lowerlimit;
    int upperlimit;
    cout<<"Enter the lower limit: ";
    cin>>lowerlimit;
    cout<<"Enter the upper limt: ";
    cin>>upperlimit;
    perfect_number(lowerlimit, upperlimit);
}