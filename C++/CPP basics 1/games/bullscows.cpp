#include <iostream>
using namespace std;

void seperate(int gnum, int &i, int &j, int &k)
{

    // for (i = 0; i < 3;i++)
    // {
    //     int temp=0;
    //     temp = gnum % 10;
    //     cout << temp<<endl;
    //     gnum /= 10;
    // }

    k = gnum % 10;         // 3
    j = (gnum % 100) / 10; // 2
    i = gnum / 100;        // 1

    // cout << i << endl;
    // cout << j << endl;
    // cout << k << endl;
}

int main()
{
    int snum = 123, gnum, si, sj, sk, gi, gj, gk, bulls = 0, cows = 0;
    cout << "Enter your guess: " << endl;
    cin >> gnum;
    seperate(gnum, gi, gj, gk);
    seperate(snum, si, sj, sk);

    if (si == gi)
    {
        bulls++;
    }
    if (sj == gj)
    {
        bulls++;
    }
    if (sk == gk)
    {
        bulls++;
    }    
    if ((si == gj || si == gk) && si != gi)
    {
        cows++;
    }
    if ((sj == gi || sj == gk) && sj != gj)
    {
        cows++;
    }
    if ((sk == gi || sk == gj) && sk != gk)
    {
        cows++;
    }
    cout << "bulls : " << bulls << endl;
    cout << "cows : " << cows << endl;
}