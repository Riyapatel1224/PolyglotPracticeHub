#include<iostream>
using namespace std;

class bank{
    int netBalance = 0;

    public:

    void deposite(int amt)
    {
        netBalance += amt;
        cout << "Deposite function"<<netBalance<<endl;
    }
    void withdraw(int amt);
    int checkBalance();
};

void bank :: withdraw(int amt)
{
    if(netBalance<amt)
    {
        cout << "Not Possible"<<endl;
    }
    else
    {
        netBalance -= amt;
        cout << "Withdraw amount\n " << netBalance<<endl;
    }
    
}

int bank::checkBalance()
{
    return netBalance;
}

int main()
{
    bank b1;
    b1.deposite(1000);
    b1.withdraw(500);
    int bal = b1.checkBalance();
    cout << "Current balance is "<< bal<<endl;
    return 0;
}
