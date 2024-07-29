#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("bank.txt");
    string data;
    fin.seekg(10);
    while(getline(fin,data))
    {
        cout << data << endl;
    }
}