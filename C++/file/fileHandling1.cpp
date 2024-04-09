#include<iostream>
#include<string>
#include<fstream>

using  namespace std;

class Bank{

    public:
        void createAcc();
};

void Bank :: createAcc() {

    ofstream fout;
    fout.open("bank.txt", ios::app);
    if(!fout){
        cout << "Error in creating file" << endl;
        return;
    }
    else
    {
        cout << "\nFile created successfully" << endl;
        string name;
        int age, balance;
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter you age: " << endl;
        cin >> age;
        cout << "Enter you balance: " << endl;
        cin >> balance;

        fout << "Name: " << name << endl;
        fout << "Age: " << age << endl;
        fout << "Balance: " << balance << endl;

        cout << "Acccount Created successfully" << endl;
        fout.close();
    }
}

int main()
{
    Bank b;
    b.createAcc();
    return 0;
}