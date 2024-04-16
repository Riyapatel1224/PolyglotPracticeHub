#include <iostream>
using namespace std;

int revNo(int no)
{
    // 123 //321

    static int reversNo = 0;
    if (no == 0)
    {
        return reversNo;
    }

    // 3
    // 2
    // 1
    int lastDigit = no % 10;
    // 0 *10 + 3
    // 3
    // 3 * 10 + 2
    // 32
    // 32 * 10 + 1
    // 321
    reversNo = reversNo * 10 + lastDigit;

    return revNo(no / 10);
}

int main()
{

    int ans = revNo(123);
    cout << ans << endl;

    return 0;
}