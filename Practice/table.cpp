#include<iostream>
using namespace std;
int main()
{
    int no,i,result;
    char choice;
    do
    {
      int j=1; // If i put define & initialize j with the rest of the variables then it if the user wants to print another table it continues the value of j from the last run
      cout<<"Enter the number for which you want the multiplication table of: ";//rather it should begin with zero so thats why!
      cin>>no;
     if(no>0)
     {
      cout<<"The multiplication table of the number "<<no<<"is: \n";
      for(i=1; i<=10; i++)
      {
          result=no*i;
          //If I initialzie the value of j here(inside the for loop ) then it will initialize the value of j to zero in every single for loop but if I initialize the value of j
          //at the start of do loop then it will continue j where it was left off until the whole for loop completes 
          while(j==i) //in programming double equal to is used to compare values
          {
          cout<<no<<" * "<<i<<" ="<<result<< endl;
          j++;
          }
      }
      cout<<"Do you want to print a multiplication table for another number: ";
      cin>>choice;
     }
     else
        cout<<"Please enter a positive number";
    }while(choice=='y');
 return 0;
}