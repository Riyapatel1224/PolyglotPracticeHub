#include<iostream>
using namespace std;

int main()
{
    int ar=10;
    int *p = &ar;

    cout<<"ar  : " << ar << endl; // 10
    cout << "ar address : " << &ar << endl; // Address of 'ar' variable.

    cout << "p : " << *p << endl;
    cout << "p address : " << p << endl; // Same as '&ar'.

    p++;

    cout << "address of p++ : " << p << endl; // New address of '*p', not the same as '&ar'.
}