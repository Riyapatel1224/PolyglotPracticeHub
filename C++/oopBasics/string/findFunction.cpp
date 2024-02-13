#include <iostream>
#include <string>
using namespace std;

int find(string name, char c)
{
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == c)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
}

int main()
{
    string name = "java";
    char c = 'a';
    int index = find(name, c);
    cout << "The character " << c << " is found at position: " << index + 1 << endl;
}
