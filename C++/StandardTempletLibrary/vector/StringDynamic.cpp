#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<string> s;
    s.push_back("hello");
    s.push_back("world");
    s.push_back("!");

    for(string i:s)
    {
        cout << i << endl;
    }

    s.pop_back();

    cout << "After removing element from vector" << endl;
    for (string i : s)
    {
        cout << i << endl;
    }

    s.insert(s.begin() + 2, "java");

    cout << "\nAfter inserting specific element" << endl;
    for (string i : s)
    {
        cout << i << endl;
    }

    cout << "\nSize of vector is " << s.size() << endl;
}