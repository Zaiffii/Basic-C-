#include<iostream>
using namespace std;
int main()
{
    double basic_salary,house_rent,daily_allowance,gross_salary;
    cout<<"Please enter your basic salary: ";
    cin>>basic_salary;
    if(basic_salary<1500)
    { //If We dont write.0 in division it will consider it as an int 
        house_rent=(10.0/100)*basic_salary; //10% of basic salary
        daily_allowance=(90.0/100)*basic_salary; //90% of basic salary
        gross_salary=basic_salary+house_rent+daily_allowance; //formula for gross salary is to add all of them
        cout<<house_rent<<"\n";
        cout<<daily_allowance<<"\n";
        cout<<gross_salary<<"\n";
        cout<<"Gross Salary="<<gross_salary<< endl;
    }
    else
    {
        house_rent=(20.0/100)*basic_salary; //20% of basic salary
        daily_allowance=(95.0/100)*basic_salary; //95% of basic salary
        gross_salary=basic_salary+house_rent+daily_allowance; //formula for gross salary is to add all of them
        cout<<"Gross Salary="<<gross_salary<< endl;
    }
    return 0;
}