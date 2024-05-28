#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main()
{
    map<string, list<string>> m1;

    m1["india"].push_back("delhi");
    m1["india"].push_back("mumbai");
    m1["india"].push_back("jaipur");

    m1["australia"].push_back("sudney");
    m1["australia"].push_back("malbourne");
    m1["australia"].push_back("perth");

    m1["canada"].push_back("toronto");
    m1["canada"].push_back("vancouver");
    m1["canada"].push_back("montreal");

    m1["uk"].push_back("london");
    m1["uk"].push_back("manchester");
    m1["uk"].push_back("birmingum");

    m1["japan"].push_back("tokyo");
    m1["japan"].push_back("hirosima");
    m1["japan"].push_back("nagasaki");

    for(auto i: m1){
        cout << i.first<<"---" << endl;
        for(string j:i.second){
            cout << j << " ";
        }
        cout << endl;
    }
}