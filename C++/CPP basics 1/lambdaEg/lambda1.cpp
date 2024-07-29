#include <iostream>
#include <string>
using namespace std;

int main(){
    auto sum = [](int a, int b)
    {
        return a + b;
    };

    auto add = [](int a, int b)
    {
        return a + b;
    };

    add(10, 20);

    // sum(10, 20);
}