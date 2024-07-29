#include<iostream>
#include "custom_class.hpp"
using namespace std;

void derivedClass ::printMessage(){

    cout << "Helloo from derived class" << endl;
}

int main()
{
    derivedClass obj;
    obj.printMessage();
}