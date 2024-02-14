// #include<iostream>
// using namespace std;

// class box{
//     private:
//         int length;
//     public:
//         box():length(9){}
//         friend int printLength(box);
// };

// int printLength(box b)
// {
//     b.length += 10;
//     return b.length;
// }

// int main()
// {
//     box b;
//     cout << "Lenght of box is " << printLength(b) << endl;
//     return 0;
// }

// You are given two classes, Circle and Rectangle, which represent geometric shapes.The Circle class has a private member radius, and the Rectangle class has private members length and width.
// Your task is to implement a friend function named
// findLargerArea() that takes objects of both Circle and Rectangle as arguments.This function should compare the areas of the given shapes and print out which shape has the larger area.

#include<iostream>
using namespace std;
class Rectangle;
class Circle
{
private:
    float radius;

public:
    Circle(float r) : radius(r) {}
    friend void findLargerArea(const Circle &c, const Rectangle &r);
};

class Rectangle{
    private:
        float length, width;

    public:
        Rectangle(float l, float w) : length(l), width(w){}
        friend void findLargerArea(const Circle &c, const Rectangle &r);
};

void findLargerArea(const Circle &c, const Rectangle &r)
{
    float circleArea = 3.14 * c.radius * c.radius;
    float rectangleArea = r.length * r.width;

    if(circleArea>rectangleArea)
    {
        cout << "circle has larger area" << endl;
    }
    else if(circleArea<rectangleArea)
    {
        cout << "rectangle has larger area" << endl;
    }
    else
    {
        cout << "both contains equal area" << endl;
    }
}

int main()
{
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    findLargerArea(circle, rectangle);
}