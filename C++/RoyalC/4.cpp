#include<iostream>
using namespace std;
# define PI 3.14
// class test
// {
//     public:
//         int a;
//         float b;
//         string c;
// };
// int main()
// {
//     test t1;
//     cin >> t1.a;
//     cin >> t1.b;
//     cin >> t1.c;
//     cout << t1.a << endl;
//     cout << t1.b << endl;
//     cout << t1.c << endl;

//     return 0;
// }

// ------------------------------------------

// class test
// {
//     public:
//         int sum,a, b, c;
//         float avg;
// };

// int main()
// {
//     test t;
//     cin>> t.a >> t.b >> t.c;
//     t.sum = t.a + t.b + t.c;
//     cout << "Add of 3 numbers : " << t.sum << endl;
//     t.avg = t.sum / 3;
//     cout << "Avg of 3 number : " << t.avg << endl;
//     return 0;
// }

// ------------------------------------------

// class test{
//     public:
//         double radius, breadth, height, area, circum;
// };

// int main()
// {
//     test t;
//     cout << "Enter radius,breath,height" << endl;
//     cin >> t.radius >> t.breadth >> t.height;
//     t.area = PI *t.radius*t.radius;
//     cout << "Area = " << t.area << endl;
//     t.area = 0.5 * t.breadth * t.height;
//     cout << "Area Of Triangle = " << t.area << endl;
//     t.circum = 2 * PI * (t.radius*t.radius);
//     cout << "Circumference Of A Circle: " << t.circum << endl;

//     return 0;
// }

// ------------------------------------------

// class test
// {
//     public:
//         int sec, min, hour , remsec;
// };

// int main()
// {
//     test t;
//     cout << "Enter seconds: " << endl;
//     cin >> t.sec;
//     t.min = (t.sec % 3600) / 60;
//     t.hour = t.sec / 3600;
//     t.remsec = (t.sec % 3600) % 60;
//     cout << t.min <<endl<< t.hour<<endl << t.remsec;
//     return 0;
// }

// ------------------------------------------

// class test{
//     public:
//         int d, days, m;
// };

// int main()
// {
//     test t;
//     cout << "Enter number of days: " << endl;
//     cin>> t.days;
//     t.m = t.d / 30;
//     t.days = t.d % 30;
//     cout << "Months" << t.m << endl;
//     cout << "days" << t.days << endl;
//     return 0;
// }

// ------------------------------------------

// class test{
//     public:
//         float SI, p, r, n;
// };

// int main()
// {
//     test t;
//     cout << "Enter principle amount , rate of interest , and number of years: ";
//     cin >> t.p >> t.r >> t.n;
//     t.SI = (t.r * t.p * t.n) / 100;
//     cout << "Simple interest is : " << t.SI;
//     return 0;
// }

// ------------------------------------------


// class test{
//     public:
//         int a, b, c;
// };

// int main()
// {
//     test t;
//     cout << "Enter two numbers: \n";
//     cin >> t.a >> t.b;
//     t.c = t.a;
//     t.a = t.b;
//     t.b = t.c;
//     cout << "A = "<<t.a<<"\nB = "<<t.b;
//     return 0;
// }

// ------------------------------------------

// class test{
//     public:
//         int a;
// };

// int main()
// {
//     test t;
//     cin >> t.a;
//     if (t.a%2==0)
//     {
//         cout << "Even";
//     }
//     else
//     {
//         cout << "Odd";
//     }
//     return 0;
// }