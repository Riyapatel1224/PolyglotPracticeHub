#include <iostream>
using namespace std;

class FB
{
    public:
        virtual void smile() = 0;
};

class A : public FB
{
    public:
        void smile()
        {
            cout << "A" << endl;
        }
};

class B : public FB
{
    public:
        void smile()
        {
            cout << "B" << endl;
        }
};

int main()
{
    FB *f;
    A a;
    f = &a;
    f->smile();

    B b;
    f = &b;
    f->smile();
    return 0;
}