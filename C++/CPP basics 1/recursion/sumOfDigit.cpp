#include<iostream>
using namespace std;

int sumOfDigit(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return num % 10 + sumOfDigit(num / 10);
    }
}

int main()
{
    int num=sumOfDigit(123);
    cout << "sum: " << num;
    return 0;
}