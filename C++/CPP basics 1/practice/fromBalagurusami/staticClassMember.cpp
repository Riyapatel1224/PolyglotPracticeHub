#include<iostream>
using namespace std;

class item
{
    static int count; //static variable
    int number;
    public:
        void getdata(int a)
        {
            number = a;
            count++;
        }
        void getcount(void)
        {
            cout << "count: ";
            cout << count << endl;
        }
};

int item::count;

int main()
{
    item a, b, c;

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout << "After reading data: " << endl;

    a.getcount();
}