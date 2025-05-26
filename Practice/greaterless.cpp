#include<iostream>
using namespace std;
int main()
{
  int no;
  cout<<"Enter any number from 1-100: ";//Checking if the number is within 1-100
  cin>>no;
  if(no>1 && no<100)
  {
    if(no>50)//greater than condition
    {
        cout<<"Your number is greater than 50";
    }
    else if(no<50)//less than condition
    {
        cout<<"Your number is less than 50";
    }
    else//equal to condition
    {
        cout<<"Your number is equal to 50";        
    }
  }
  else
  {
    cout<<"You have entered an invalid number";
  }
}