#include <iostream>
using namespace std;

class Shape
{
public:
    Shape();
};

Shape ::Shape()
{
    cout << "\n Shape constructor called";
}

int main()
{
    Shape s1;
}
