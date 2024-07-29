#include <iostream>
using namespace std;

class Test
{
public:
    int num;
    void obj1(Test t1)
    {
        cout << t1.num;
    }
};

int main()
{
    Test t;
    t.num = 100;
    t.obj1(t);
}