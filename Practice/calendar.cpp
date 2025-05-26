#include<iostream>
using namespace std;

int main() 
{
   int base_year=1900,year,total_years,leap_years,non_leap_years,total_days,day;//variable name  cannot contain spaces and must begin with letter or an underscore
    cout<<"We will consider 1st January,1900 as the start year!\n";
    cout<<"Please enter a year in which you want to find out what day was on 1st january: ";
    cin>>year;
  if(year>=1900)
  {
    total_years = year - base_year - 1; //becase e.g base year is 2000 and user entered 2024 to 2000(1) 2001(2) 2023(3) we will not include 2024 because it is not completed its on 1st Jan
    //Now we will calculate leap years
    leap_years = total_years / 4;

    non_leap_years=total_years - leap_years;//We will do this because total years have leap years in them and normal years have 365 days  and leap years have 366 days
    total_days=(non_leap_years*365)+(leap_years*366)+1; //We will do +1 because 1st january will be included in days from above we did -1 because that was years


    day=total_days % 7;
    if(day==0)
       cout<<"Monday";
    else if(day==1)
        cout<<"Tuesday";
    else if(day==2)
    {
        cout<<"Wednesday";
    }
    else if(day==3)
    {
        cout<<"Thursday";
    }
    else if(day==4)
    {
        cout<<"Friday";
    }
    else if(day==5)
    {
        cout<<"Saturday";
    }
    else
    {
        cout<<"Sunday";
    }
  }
  else
  {
  cout<<"You have entered a year before 1900";
  }  
}