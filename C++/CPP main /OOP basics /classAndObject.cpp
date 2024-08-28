#include<iostream>
#include<string>

using namespace std;

class Person{
    public:
        string name;
        int age;

        void intro(){
            cout << "hello, my name is " << name << " and my age is " << age << endl;
        }
};

int main(){
    Person p;
    p.name = "abc";
    p.age = 12;
    p.intro();

    return 0;
}