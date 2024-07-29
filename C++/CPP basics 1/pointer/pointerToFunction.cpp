#include<iostream>
using namespace std;

int test(int a,int b)
{
    cout << "a = " << a<<endl;
}

int test2(int a,int b)
{
    cout << "b = " << b << endl;
}

int main()
{
    int (*p)(int, int) = test;
    int (*p2)(int, int) = test2;
    p(10, 20);
    p2(30, 40);
}