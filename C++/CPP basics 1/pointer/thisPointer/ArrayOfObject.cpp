#include <iostream>
using namespace std;

class Student
{

    int id;
    string name;
    int marks;

public:
    void getStudentData(int id, string name, int marks);
    void printStudentData();
};

void Student ::getStudentData(int id, string name, int marks)
{
    this->id = id;
    this->name = name;
    this->marks = marks;
}

void Student ::printStudentData()
{
    cout << "id: " << this->id << endl;
    cout << "name: " << this->name << endl;
    cout << "marks: " << this->marks << endl;
}

int main()
{
    Student s[3];

    int id;
    string name;
    int marks;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter id : ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;

        s[i].getStudentData(id, name, marks);
    }

    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        s[i].printStudentData();
    }
}