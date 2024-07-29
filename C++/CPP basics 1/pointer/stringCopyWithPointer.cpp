#include <iostream>
using namespace std;

int main()
{
    string name = "ram";
    string *p = &name;

    cout << *p << endl;
    cout << name << endl;
}
