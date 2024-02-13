#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "raj";
    string tempname = "ram";
    
    for (int i = 0; i < name.length(); i++)
    {
        if(name[i]==tempname[i])
        {
            cout << "not same" << endl;
            break;
        }
    }
}
