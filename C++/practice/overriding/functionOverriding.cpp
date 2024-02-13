#include<iostream>
using namespace std;

class animal{
    public:
        void eat()
        {
            cout << "eating bread..." << endl;
        }
};

class Dog : public animal{
    public :
        void eat()
        {
            cout << "Eating ..";
        }
};

int main()
{
    Dog d = Dog();
    d.eat();
    return 0;
}