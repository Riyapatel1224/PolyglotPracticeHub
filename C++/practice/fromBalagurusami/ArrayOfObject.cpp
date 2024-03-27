#include <iostream>
#include <string.h>
using namespace std;

class employee
{
    char name[30];
    float age;

public:
    void getdata(void);
    void putdata(void);
};

void employee ::getdata(void)
{
    cout << "Enter the Employee's Name : ";
    cin.getline(name,30);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();
}

void employee ::putdata(void)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

const int size=0;

int main()
{
    const int size=3;

    employee manager[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nDetails of manager" << i + 1 << endl;
        manager[i].getdata();
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "\nManager" << i + 1 << endl;
        manager[i].putdata();
    }
    return 0;
}