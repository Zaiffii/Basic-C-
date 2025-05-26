#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float dollar;
};
void function(money m1)
{
    m1.rice=50;
    m1.car=60;
}
int main()
{
    money m1;
    function(m1);
}