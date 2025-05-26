#include <iostream>
using namespace std;

int main() {
    int height = 10;
    
    for (int i = 1; i <= height; i++) 
    {
        for (int j = 1; j <= height; j++) 
        {
            if (j == 1 || j == height || j == i) 
            {
                cout << "*";
            } else
             {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
