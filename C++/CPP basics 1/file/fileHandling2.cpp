#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("bank.txt");
    if(!fin)
    {
        cout << "Error in opening file" << endl;
    }
    else{
        cout<<"File opened successfully"<<endl;
        string line;
        while(getline(fin,line))
        {
            cout << line << endl;
        }
    }
}