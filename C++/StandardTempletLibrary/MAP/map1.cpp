#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<int, string> m1;
    m1[1] = "amit";
    m1[22] = "Rahul";
    m1[25] = "amit";

    for (auto it = m1.begin(); it != m1.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}