
#include<iostream>
#include<string>
using namespace std;

string reverse(string name)
{
    string temp = "";
    for (int i = name.length()-1; i >= 0; i--)
    {
         temp += name[i];
    }

    return temp;
}

int main()
{
    string name = "Riya";
    string temp=reverse(name);
    cout<<temp<<endl;
}