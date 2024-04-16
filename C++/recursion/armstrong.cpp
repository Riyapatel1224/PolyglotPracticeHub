#include<iostream>
using namespace std;

int armstrong(int num)
{
    if(num==153)
    {
        return 0;
    }
    else
    {
        return  ((num%10)^3) + armstrong(num/10);
    }
}


int main()
{
    int num=armstrong(153);
    cout << "num: " << num;
}