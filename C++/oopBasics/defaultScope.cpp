#include <iostream>
using namespace std;

class test
{
public:
    void table(int a);
    void factorial(int a);
};

void test::table(int a = 10)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << a << "*" << i << "=" << i * a << endl;
    }
}

void test::factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    cout << "Factorial= " << fact << endl;
}

int main()
{
    int a=5;
    test t1;
    t1.table();
    t1.factorial(a);
    return 0;
}

