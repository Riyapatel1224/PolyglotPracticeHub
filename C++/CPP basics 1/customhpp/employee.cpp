#include <iostream>
#include "Employee.hpp"

using namespace std;

class EmployeeDetail : public Employee
{

public:
    void printMessage()
    {
        cout << "Hello from EmployeeDetail" << endl;
    }
};

int main()
{

    EmployeeDetail obj;
    obj.printMessage();
}