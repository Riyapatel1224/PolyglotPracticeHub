#include<iostream>
using namespace std;

class test{

    public:

    void operator ++()
    {
        cout << "Operator Overloading";
    }
};

int main() {
    test t;
    ++t;
}