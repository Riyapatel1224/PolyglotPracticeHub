#include<iostream>
using namespace std;

class Sum{
    public:
        int x = 0;
        void operator +(Sum &s)
        {
            cout << "x1 is : "<< x << endl;
            cout << "x2 is : " << s.x;
        }
};

int main()
{
    Sum t1, t2;
    t1.x = 100;
    t2.x = 200;
    t1 + t2;
}
