#include<iostream>
using namespace std;
// C = (°F - 32) × 5 / 9 
int main()
{
    int C, F;
    cout << "Enter a temperature in Fahrenheit: "<<endl;
    cin >> F;
    C = (F - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << C << endl;
}