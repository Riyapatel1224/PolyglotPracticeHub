#include<iostream>
using namespace std;

class RBI{
    public:
        virtual void withdraw() = 0;
};

class SBI:public RBI{
    public:
    void withdraw(){
        cout << "Withdraw from sbi";
    }
};

int main()
{
    SBI s;
    s.withdraw();
}
