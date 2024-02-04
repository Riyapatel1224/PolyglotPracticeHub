#include<iostream>
using namespace std;

class comapare{

    public:
        int a,b;
        bool operator >(comapare &c)
        {
            cout << "> called...";
            return this->a > c.a and this->b > c.b;
        }

        bool operator ==(comapare &c)
        {
            cout << "== called...";
            return this->a == c.a and this->b == c.b;
        }
};

int main(){

    comapare c1, c2;
    c1.a = 100;
    c1.b = 100;
    c2.a = 100;
    c2.b = 100;
    if(c1>c2)
    {
        cout << "c1>c2";
    }
    else if(c1==c2)
    {
        cout << "c1==c2";
    }
    else{
        cout << "c1<c2";
    }
}