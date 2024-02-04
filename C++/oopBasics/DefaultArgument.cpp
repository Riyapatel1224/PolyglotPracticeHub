#include<iostream>
using namespace std;

class test{
    public:
    void defaulEg(int a=0, int b=0)
    {
        cout << "A=" << a << endl;
        cout << "B=" << b << endl;
    }
};


int main()
{
    test t1;
    t1.defaulEg();
    return 0;
}