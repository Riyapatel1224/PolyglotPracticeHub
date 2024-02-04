#include <iostream>
using namespace std;

class A
{

public:
    int a = 100;
};

class B : public A
{
public:
    int b = 200;
    void classB()
    {
        cout << "\n inherited A in class B";
        cout << "\n A = " << a << endl;
    }
};

class C : public B
{
public:
    int c = 300;
    void classC()
    {
        cout << "\n inherited A and B in class C";
        cout << "\n A = " << a;
        cout << "\n B = " << b;
        cout << "\n C = " << c;
    }
};

int main()
{
    C c1;
    c1.classB();
    c1.classC();

    return 0;
}













// class GOV
// {

// public:
//     char partyName[10] = "BJP";
//     char pmName[20] = "Narendra Modi";
// };
// class StateGov : public GOV
// {

// public:
//     char cmName[20] = "Yogi Adityanath";
//     char stateName[20] = "Uttar Pradesh";

//     void getMyStateData()
//     {

//         cout << "Party name: " << partyName << endl;
//         cout << "PM name: " << pmName << endl;
//         cout << "CM name: " << cmName << endl;
//         cout << "State name: " << stateName << endl;
//     }
// };

// class AMC : public StateGov
// {

// public:
//     void getMyCityData()
//     {

//         cout << "Party name: " << partyName << endl;
//         cout << "PM name: " << pmName << endl;
//         cout << "CM name: " << cmName << endl;
//         cout << "State name: " << stateName << endl;
//     }
// };

// int main()
// {

//     AMC a1;
//     a1.getMyCityData();
//     a1.getMyStateData();

//     return 0;
// }