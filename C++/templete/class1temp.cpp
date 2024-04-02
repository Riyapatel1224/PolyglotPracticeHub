#include<iostream>
#include<string>
using namespace std;

template <class T> class MyClass
{
    public:
        void test1(int a)
        {
            cout << "a= " << a;
        }

        void test(T a)
        {
            cout << "\na= " << a;
        }
};

int main()
{
    MyClass<int> m1;
    m1.test(10);
    m1.test('A');

    MyClass<string> m2;
    m2.test("Hello");
}