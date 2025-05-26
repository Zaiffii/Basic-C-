#include<iostream>
using namespace std;
#include<math.h>
int main()
{
 double leg1,leg2,area,hypotenuse;   
    cout<<"Enter the first leg of your right angle triangle: ";
    cin>>leg1;
    cout<<"Enter the second leg of your right angle triangle: ";
    cin>>leg2;
    area=(leg1*leg2)/2; //Area
    hypotenuse=sqrt((leg1*leg1)+(leg2*leg2)); //Hypotenuse
    cout<<"Area: "<<area<<"\nHypotenuse: "<<hypotenuse<< endl;
}