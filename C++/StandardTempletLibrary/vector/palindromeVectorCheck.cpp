#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPalindrome(string s)
{
    int n = s.size(); 
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<string> v;
    string s;
    int num;

    while (true)
    {
        cout << "\nEnter a name to a vector" << endl;
        cin >> s;

        num = isPalindrome(s);

        if(num==true)
        {
            v.push_back(s);
        }

        else
        {
            continue;
        }


        cout << "\npress 0 to exit or any other no to continue" << endl;
        cin >> s;
        if (s == "0")
        {
            break;
        }
    }
    for (string i : v)
    {
        cout << i << endl;
    }
}

