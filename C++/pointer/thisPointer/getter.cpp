#include<iostream>
using namespace std;

class User{

    string name;
    int age;

    public:
        void setName(string name)
        {
            this->name=name;
        }

        void setAge(int age)
        {
            this->age = age;
        }

        string getName()
        {
            return this->name;
        }
        int getAge()
        {
            return this->age;
        }
};

int main()
{
    User u;
    u.setAge(10);
    u.setName("ram");

    cout << "User Name : " << u.getName() << endl;
    cout << "User Age : " << u.getAge() << endl;
}