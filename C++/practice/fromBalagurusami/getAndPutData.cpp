#include<iostream>
using namespace std;

class Item
{
    int number;
    float cost;

    public:
        void getdata(int a, float b);
        void putdata(void)
        {
            cout << "Number: " << number << endl;
            cout << "Cost: " << cost << endl;
        }
};

void Item :: getdata(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    Item x;
    x.getdata(11, 1.1);
    x.putdata();
    return 0;
}