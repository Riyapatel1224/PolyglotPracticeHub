#include<iostream>
using namespace std;

class RBI{
    public:
        virtual void upi() = 0; 
};

class SBI : public RBI{
    public:
        void upi()
        {
            cout << "SBI" << endl;
        }
};


int main()
{
    SBI s;
    s.upi();
}