#include<iostream>
using namespace std;

void file()
{
    cout << "file";
}

void database()
{
    cout << "database";
}

int main()
{
    string input = "file";
    if(input=="file")
    {
        void(*p)()=file;
        p();
    }
    else
    {
        void (*p)() = database;
        p();
    }
}