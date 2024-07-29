#include<iostream>
using namespace std;

class animal{
    public:
        void eat()
        {
            cout << "animal class " << endl;
        }
};

class dog:public animal{
    public:
        void bark()
        {
            cout << "dog class" << endl;
        }
};

class smallDog:public  dog{
    public:
        void weep()
        {
            cout << "smallDog class" << endl;
        }
};


int main()
{
    smallDog s;
    s.eat();
    s.bark();
    s.weep();

}