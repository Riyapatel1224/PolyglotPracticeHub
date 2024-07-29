#include<iostream>
using namespace std;

class cal{

    public:

        void add(int a, int b);
        void sub(int a,int b);
        void div(int a,int b);
        void mod(int a,int b);
};

void cal::add(int a=0,int b=0)
{
    cout << "Addition: " << a + b << endl;
}

void cal::sub(int a=0,int b=0)
{
    cout << "Sub: " << a - b << endl;
}

void cal::div(int a=0,int b=0)
{
    cout << "div: " << a / b << endl;
}

void cal::mod(int a=0,int b=0)
{
    cout << "mod: " << a % b << endl;
}
int main()
{
    int a=10, b;
    cal c;
    c.add(a,b);
    c.sub(a,b);
    c.div(a,b);
    c.mod(a,b);
    return 0;
}