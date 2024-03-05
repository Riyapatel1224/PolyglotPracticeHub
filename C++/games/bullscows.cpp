#include<iostream>
using namespace std;

int seperate(int gnum)
{
    int i;
    for (i = 0; i < 3;i++)
    {
        int temp=0;
        temp = gnum % 10;
        cout << temp<<endl;
        gnum /= 10;
    }
    

}

int main()
{
    int snum = 123,gnum, i; // secret number
    cout << "Enter your guess: "<<endl;
    cin >> gnum;
    seperate(gnum);
}