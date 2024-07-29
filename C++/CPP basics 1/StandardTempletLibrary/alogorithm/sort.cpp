#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
    // int a[] = {23, 42, 543, 56, 6};
    // sort(a, a + 5);
    // for (int i = 0; i < 5;i++)
    // {
        // cout << a[i] << endl;
    // }

    vector<int> v = {23, 42, 543, 56, 6};
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>());
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // vector<string> names = {"abc", " zaw", "jkl", "tre"};
    // sort(names.begin(), names.end());
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }

    cout << *max_element(v.begin(), v.end());
    cout << *min_element(v.begin(), v.end());
}