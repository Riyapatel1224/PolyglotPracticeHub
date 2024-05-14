#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{

    list<string> users;
    users.push_back("Alice");
    users.push_back("Bob");
    users.push_back("Charlie");
    users.push_back("Diana");
    users.push_back("Eve");

    for (auto i : users)
    {
        cout << i << endl;
    }

    // for(list<string>::iterator it=users.begin();it!=users.end();it++){
    //     cout<<*it<<endl;
    // }
}

// diff bw vector and list in stl
// 1) vector is a dynamic array, list is a doubly linked list
// 2) vector is faster than list in accessing elements,
//     list is faster than vector in inserting and deleting elements