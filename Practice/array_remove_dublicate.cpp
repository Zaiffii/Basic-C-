#include<iostream>
using namespace std;
void remove_dublicate(int arr[])
{
    int i,j;
    for(i=0; i<11-1; i++)
    {
        for(j=i+1; j<11; j++)
        {
            if(arr[i]==arr[j])
                arr[j]=0;
        }
    }
}
int main()
{
    int array[11]={3,6,7,9,3,6,8,3,5,10,3};
    int i;
    remove_dublicate(array);
    cout<<"\tPrinting the list\n";
    for(i=0; i<11; i++)
        cout<<"Number "<<i+1<<" :"<<array[i]<<endl;

}