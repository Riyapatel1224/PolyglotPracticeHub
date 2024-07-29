#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int ArithmeticOp(vector<int> num, vector<char> ch, vector<string> input)
{
    int i, j;
    for (auto i : input)
    {
        for (auto j : i)
        {
            // cout << " " << j << endl;
            if (isdigit(j))
            {
                // cout << j << endl;
                num.push_back(j - '0');
            }
            else
            {
                ch.push_back(j);
            }
        }
    }
    // cout << "Numbers: " << endl;
    // for (int j : num)
    // {
    //     cout << " " << j << endl;
    // }
    // cout << "String: " << endl;
    // for (char i : ch)
    // {
    //     cout << " " << i << endl;
    // }
    int output;

    cout << "Result : " << output << endl;

        // if (ch[0] == '+')
    // {
    //     if(ch[1]=='*'){
    //         output = num[0] + num[1] * num[2];
    //     }
    //     else if(ch[1]=='/'){
    //         output = num[0] + num[1] / num[2];
    //     }
    //     else{
    //         output = num[0] + num[1] + num[2];
    //     }
    // }
    // else if (ch[0] == '+')
    // {
    //     if (ch[1] == '*')
    //     {
    //         output = num[0] + num[1] * num[2];
    //     }
    //     else if (ch[1] == '/')
    //     {
    //         output = num[0] + num[1] / num[2];
    //     }
    //     else
    //     {
    //         output = num[0] + num[1] + num[2];
    //     }
    // }
    }

int main()
{
    string name;
    vector<string> input;
    vector<int> num;
    vector<char> ch;
    cout << "Enter a num: " << endl;
    cin >> name;
    input.push_back(name);
    ArithmeticOp(num, ch, input);
}
