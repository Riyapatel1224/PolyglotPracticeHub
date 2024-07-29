#include<iostream>
using namespace std;


template <typename T , typename B> void sum(T a,B b)
{
    cout << "\na= " << a << endl;
    cout << "b= " << b << endl;
}

int main()
{
    sum(10, "ram");
}