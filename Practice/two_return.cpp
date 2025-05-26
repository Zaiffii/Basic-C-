// #include <iostream>
// using namespace std;

// int* calculate(int x, int y) 
// {
//     static int res[2];
//     res[0] = x + y;
//     res[1] = x * y;
//     return res;
// }

// int main() 
// {
//     int a = 5, b = 3;
//     int* result = calculate(a, b);
//     cout << "Sum: " << result[0] << endl;
//     cout << "Product: " << result[1] << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int  operation(int &x, int &y)
{
    x++;
    y--;
    return 0;

}
int main()
{
    int no1=3,no2=2;
    int i=operation(no1,no2);
    cout<<no1<<endl;
    cout<<no2;

}