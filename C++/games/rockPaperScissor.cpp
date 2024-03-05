
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


char getComputerMove()
{
    int move;
    // generating random number between 0 - 2
    srand(time(NULL));
    move = rand() % 3;

    // returning move based on the random number generated
    if (move == 0)
    {
        return 'p';
    }
    else if (move == 1)
    {
        return 's';
    }
    return 'r';
}

int main()
{
    // Write C++ code here
    std::cout << "Try programiz.pro";
    // enter your move...
    // rock

    char user;
    

    while(true)
    {
        char c1 = getComputerMove();


        cout << "enter you choice p s r: " << endl;
        cin >> user;

        if(user==c1)
        {
            cout << "computer: " << c1 << endl;
            cout << "user: " << user << endl;
            cout << "draw" << endl;
        }
        else if ((user == 'r' && c1 == 'p') || (user == 'p' && c1 == 's'))
        {
            cout << "computer: " << c1 << endl;
            cout << "user: " << user << endl;
            cout << "break" << endl;
            exit(0);
        }
        else
        {
            cout << "computer: " << c1 << endl;
            cout << "user: " << user << endl;
            cout << "continue" << endl;
            continue;
        }
    }
    return 0;
}


