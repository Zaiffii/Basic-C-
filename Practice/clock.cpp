#include<iostream>
#include<thread> // For sleep functionality
#include<chrono> // For duration
using namespace std;
int main()
{
    int hours, minutes , seconds, h, m, s;
    for(h=0; h<24; h++)
    {
        for(m=0; m<60; m++)
        {
            for(s=0; s<60; s++)
            {
                if(h<10)//showing 01 02 03 for Hours
                    cout<<"0"<<h<<":";
                else    
                    cout<<h<<":";
                if(m<10)//showing 01 02 03 for Minutes
                    cout<<"0"<<m<<":";
                else
                    cout<<m<<":";                    
                if(s<10)//showing 01 02 03 for Seconds
                    cout<<"0"<<s<<"\n";
                else 
                    cout<<s<<"\n";
                //A 1-second delay
                this_thread::sleep_for(chrono::seconds(1));
   
            }
        }
        if(h==24)//reseting Hours to 1
            h=1;

    }
}

