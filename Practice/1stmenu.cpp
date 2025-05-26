#include <iostream>
using namespace std;

int main()
{
float a, b, c, B, F, S, TotalBurger, TotalFries, TotalSoda;
cout<<"Enter your quantity for Burger: ";
cin>>a;
cout<<"Enter Your quantity for Fries: ";
cin>>b;
cout<<"Enter your quantity for Soda: ";
cin>>c;
B=a*5.99;
F=b*2.49;
S=c*1.99;

TotalBurger=B+0.01; 
TotalFries=F+0.01;
TotalSoda=S+0.01;

cout<<"Menu\n";
cout<<"Item\tQuantity\tPrice\tTax\tTotal\n";
cout<<"Burger\t"<<a<<"\t\t$"<<B<<"\t$0.01\t$"<<TotalBurger<<"\n";
cout<<"Fries\t"<<b<<"\t\t$"<<F<<"\t$0.01\t$"<<TotalFries<<"\n";
cout<<"Soda\t"<<c<<"\t\t$"<<S<<"\t$0.01\t$"<<TotalSoda<<"\n";
}
/*C++ main jab eik hi cout multiple lines kay liay use krna hai
tou phir har line kay end peh\ dalain gai ta kah complier ko 
pata chalay kah yehi string neechay wali line main cont ho rahi*/

/*IMPORTANT jab bhi hum nay do variables peh koi operation perform krwana hai tou phir 3 variables
lo aur phir jo bhi operation hai woh pehlay say hi perform krlo jaisay is main kiya hai 
end main sirif woh variable output kay liay rakho bs*/