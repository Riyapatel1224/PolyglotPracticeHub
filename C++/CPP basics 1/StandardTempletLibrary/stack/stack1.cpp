#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("abc");
    s.push("def");
    s.push("ghi");
    s.push("jkl");

    cout << "top: " << s.top() << endl;
    cout << "is empty..." << s.empty() << endl;

    while(!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    cout << "is empty..." << s.empty() << endl;
}
