#include<iostream>
using namespace std;
int main()
{
    int no,i,Fa=1,Fb=1,Ans,a,b;
    cout<<"Enter your number: ";
    cin>>no;
    if(no==1)
    cout<<"F1=1";
    else if(no==2)
    cout<<"F2=2";
    else
    {
    for(i=3; i<=no; i++)
    {
    Ans=Fa+Fb;
    a=Fa;
    b=Fb;
            //Here if I write Fb=Ans then write Fa=Fb then the value of Fb would already by overwritten by ans so the value of Fa would also be over written by ans instead of Fb
    Fb=Ans;
    Fa=Fb;
           //If we write a=Fa & b=Fb then the value of Fa is replaced by Fb and value of Fb is replaced by Ans which is not correct
    }
    cout<<"F"<<no<<"=F"<<no-1<<"+F"<<no-2<<"="<<a<<"+"<<b<<"="<<Ans;
    }
}
//We used a & b just to print in the correct order otherwise there is no use of a&b.
//If we write print(f"F{no}=F{no-1}+F{no-2}={Fa}+{Fb}={Ans}") it would not be correct because in the loop the value of Fa is replaced by Fb and the value of Fb is replace by Ans