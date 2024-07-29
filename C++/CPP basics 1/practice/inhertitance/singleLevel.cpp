#include<iostream>
using namespace std;

class Acount{
    public:
        float salary = 6000.00;
};

class programmer:public Acount{
    public:
        float bonus = 7000.00;
};

int main()
{
    programmer p;
    cout << "salary: " << p.salary << endl;
    cout << "bonus: " << p.bonus << endl;
    
    return 0;
}