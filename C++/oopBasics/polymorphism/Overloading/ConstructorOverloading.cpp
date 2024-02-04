#include <iostream>
using namespace std;

class Lang
{

public:
    Lang()
    {
        cout << "Constructor called" << endl;
    }
    Lang(char name)
    {
        cout << "Constructor called with name" << endl;
    }
    Lang(char name, int age)
    {
        cout << "Constructor called with name and age" << endl;
    }
};

int main()
{

    Lang l;           // default constructor
    Lang l1('a');     // constructor with name
    Lang l2('a', 10); // constructor with name and age
}