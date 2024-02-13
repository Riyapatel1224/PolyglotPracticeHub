#include<iostream>
#include<string>
using namespace std;

int main()
{
    string sen;
    int count=1;
    getline(cin, sen);
    for (int i = 0; i < sen.length();i++)
    {
        
        if(sen[i]==' ')
        {
            count++;
        }
    }
    cout << count;
}
