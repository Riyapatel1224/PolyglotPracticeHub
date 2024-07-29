#include <iostream>
using namespace std;

class calc
{
public:
    void add(int a, int b, int c)
    {
        int sum = a + b + c;
        cout << "a + b + c = " << sum << endl;
    }

    void add(int a, int b)
    {
        int sum = a + b;
        cout << "a + b = " << sum << endl;
    }
    void add(int a, int b, int c, int d)
    {
        int sum = a + b + c + d;
        cout << "a + b + c + d = " << sum << endl;
    }
};

int main()
{
    calc c1;
    c1.add(10, 20, 30, 40);
    c1.add(10, 20, 30);
    c1.add(10, 20);
}

// class Amazone
// {

// public:
//     void order(int id){
//         cout<<"Order id = "<<id<<endl;
//     }
//     void order(float id)
//     {
//         cout << "Order id = " << id << endl;
//     }
//     void order(double id)
//     {
//         cout << "Order id double= " << id << endl;
//     }
// };

// int main()
// {

//     Amazone a;
//     a.order(10.5f);
//     a.order(123.23);
// }