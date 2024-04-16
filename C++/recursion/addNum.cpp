#include <iostream>
using namespace std;

int print(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        return n + print(n - 1);
    }
}

int main()
{
    int num = print(10);
    cout << num;
    return 0;
}
