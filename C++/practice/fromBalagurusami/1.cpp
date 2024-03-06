#include<iostream>
using namespace std;

class Person
{
    char name[30];
    int age;
    public:
        void getData(void);
        void display(void);
};

void Person:: getData(void)
{
    cout << "\nEnter a name: "<<endl;
    cin >> name;
    cout << "\nEnter an age: ";
    cin >> age;
}

void Person:: display(void)
{
    cout << "\nName: " << name;
    cout << "\nAge: " << age;
}

int main()
{
    Person p1, p2;
    p1.getData();
    p1.display();
    p2.getData();
    p2.display();
    
    return 0;
}