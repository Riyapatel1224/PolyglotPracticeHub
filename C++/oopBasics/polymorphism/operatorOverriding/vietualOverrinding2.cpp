#include <iostream>
using namespace std;

class TRAI
{
public:
    virtual void call(int x) = 0;
};

class JIO : public TRAI
{
public:
    void call(int x)
    {
        cout << "Calling from jio";
    }
};

int main()
{
    JIO j;
    j.call(3);
}