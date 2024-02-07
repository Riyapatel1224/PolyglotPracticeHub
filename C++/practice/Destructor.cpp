#include<iostream>
using namespace std;

class Employee{
    public:
    Employee()
    {
        cout<<"Default constructor called."<<endl;
    }

    ~Employee()
    {
        cout<<"Destructor called."<<endl;
    }
};

int main()
{
    Employee e1;
    Employee e2;
}