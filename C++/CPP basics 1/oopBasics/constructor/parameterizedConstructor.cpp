#include <iostream>
using namespace std;

class Student
{

public:
    Student(int id, char name[20]="Riya") // or make it default
    {
        cout << "\n Student constructor called";
        cout << "\n parameterized constructor called";
        cout << "\n id: " << id;
        cout << "\n name: " << name;
    }
};

int main()
{
    Student s1(100); // have to pass the parameter in parametarize constructor
    Student s2(200);
}

