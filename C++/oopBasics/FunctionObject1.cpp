#include <iostream>
using namespace std;

class mathCal
{

public:
    int length, breadth;

    void areaOfSquare(mathCal t1)
    {
        cout << "square: " << t1.length * t1.length << endl;
    }

    void areaOfRect(mathCal t1)
    {
        cout << "square: " << t1.length * t1.breadth << endl;
    }
};

int main()
{
    mathCal t1;
    t1.length = 100;
    t1.breadth = 200;
    t1.areaOfRect(t1);

    mathCal t2;
    t2.length = 100;
    t2.areaOfSquare(t2);
}