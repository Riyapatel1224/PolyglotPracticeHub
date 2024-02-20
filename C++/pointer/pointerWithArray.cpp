#include<iostream>
using namespace std;
int main()
{
    int ar[5] = {1, 2, 3, 4, 5},arr[5];
    int *pr = ar;

    for (int i = 0; i < 5;i++)
    {
        cout << pr[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i] = ar[i];
    }

    cout << endl;

    for (int i = 0; i < 5;i++)
    {
        cout << arr[i] << endl;
    }
}