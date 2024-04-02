#include<iostream>
#include<typeinfo>
using namespace std;

template <typename T> void getage(T a)
{
    cout << "Age is : " << a<<endl;
}

template <typename T> T sum(T a,T b)
{
    if (typeid(a) == typeid(int) && typeid(b) == typeid(int))
    {
        return a + b;
    }
}

int main()
{
    int a = sum(10, 20);
    cout << a << endl;
}
