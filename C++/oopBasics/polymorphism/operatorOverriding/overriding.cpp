#include<iostream>
using namespace std;

class parent{
    public:
    void display(){
        cout << "Parent class"<<endl;
    }
};

class child:public parent {
    public:
    void display()
    {
        cout << "Child class" << endl;
    }
};

int main()
{
    child c;
    c.display();
}