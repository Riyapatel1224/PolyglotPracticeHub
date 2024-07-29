#include <iostream>
using namespace std;

int main(){
    int a, b,c;
    cout << "Enter 2 numbers: " << endl;
    cin >> a;
    cin >> b;
    c = (a > b) ? a : b;
    cout << c;
}