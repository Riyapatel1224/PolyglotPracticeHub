#include<iostream>
using namespace std;

class Employee{
    public:
        int id=1000;
        string name="Raj";

    Employee(int id,string name)
    {
        cout << "this pointer " << this->id << this->name << endl;
        cout << "without this " << id << name << endl;
    }

};

int main()
{
    Employee e=Employee(101, "Ajay");
}
