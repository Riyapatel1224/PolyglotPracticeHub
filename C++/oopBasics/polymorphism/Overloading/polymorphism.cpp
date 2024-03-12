#include<iostream>
using namespace std;

class India{
    public:
        void test()
        {
            cout << "India" << endl;
        }
};

class Gujarat : public India{
    public:
        void test()
        {
            cout << "Gujarat" << endl;
        }
};

int main()
{
    Gujarat g;
    g.test();
}