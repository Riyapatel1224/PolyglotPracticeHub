#include <iostream>
using namespace std;

int *returnPointer()
{

    int x = 10;                         // 001
    cout << "\n address of x = " << &x; // 001
    int *p = &x;                        // 001

    return p; // 001
}

int main()
{

    int *p = returnPointer();
    cout << "\n value of p = " << p; // 001 --10
}