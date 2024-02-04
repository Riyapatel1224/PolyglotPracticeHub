#include <iostream>
using namespace std;

class C;
class B;
class A
{
public:
    int x = 100;
    void friend iamFriend(A obja, B objb, C objc);
};

class B
{
public:
    int y = 200;
    void friend iamFriend(A obja, B objb, C objc);
};

class C
{
public:
    int z = 300;
    void friend iamFriend(A obja, B objb, C objc);
};

void iamFriend(A obja, B objb, C objc)
{
    cout << "Friend Function: " << endl;
    int ans = obja.x + objb.y + objc.z;
    cout << "\n" << ans << endl;
}

int main()
{

    A a;
    B b;
    C c;
    iamFriend(a, b, c);
}