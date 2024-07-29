#include<iostream>
using  namespace std;
int main() 
{
    int a, b, c, x;
    cout << "Enter the value of a b and c: \n";
    cin >> a;
    cin >> b;
    cin >> c;

    x = a / b - c;
    cout << "value of x: " << x;
}