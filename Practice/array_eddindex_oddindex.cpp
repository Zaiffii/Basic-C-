#include<iostream>
using namespace std;
int main()
{
    int array[10];
    int i, odd_sum=0, even_sum=0;
    for(i=0;i<10; i++)
    {
        cout<<"Enter Number "<<i+1<<": ";
        cin>>array[i];
    }
    for(i=1; i<10; i+=2)
        odd_sum=odd_sum+array[i];
    for(i=0; i<10; i+=2)
        even_sum=even_sum+array[i];
    cout<<"Sum of odd indexes: "<<odd_sum<<endl;
    cout<<"Sum of even indexes: "<<even_sum;        
}