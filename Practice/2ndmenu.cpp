#include <iostream>
using namespace std;

int main()
{
    cout<<"\"SuperMarket\"\n\
    \t1234 Market St.\\Townville\\USA\n\
    Item\tQty\tUnit Price\tTotal Price\n\
    -------------------------------------------\n\
    Apple\t2\t$1.25\t\t$2.50\n\
    Banana\t5\t$0.75\t\t$3.75\n\
    Milk\t1\t$2.50\t\t$2.50\n\
    Bread\t3\t$1.00\t\t3.00\n\
    Eggs\t12\t$0.10\t\t$1.30\n\
    Sub-Total:\t\t\t\t$12.95\n\
    Tax(10%):\t\t\t\t$1.30\n\
    -------------------------------------------\n\
    Final Total:\t\t\t$14.25";
    return 0;    
}
/*To use quotation marks within a quotation mark
we use\ so that the ""can be seperated from the
cout syntax*/