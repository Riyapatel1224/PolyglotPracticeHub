#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    int num;

    while(true)
    {
        cout << "\nEnter a number to a vector" << endl;
        cin >> num;

        v.push_back(num);

        cout << "\npress 0 to exit or any other no to continue" << endl;
        cin >> num;
        if(num==0)
        {
            break;
        }
    }
    for(int i:v)
    {
        cout << i << endl;
    }
}

