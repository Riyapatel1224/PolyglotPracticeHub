#include<iostream>
using namespace std;

class Employee{

      
    public:
        int id = 1000;

        void empData(int id)
        {
            cout << "id " << id << endl;
            cout << "id " << this->id<<endl;
        }
};

int main()
{
    Employee e;
    e.empData(2000);
}
