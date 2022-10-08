// learning vectors in cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(45);

    for (auto &&i : v)
    {
        cout << i << " ";
    }
    v.pop_back();
    cout << endl;
    for (auto &&i : v)
    {
        cout << i << " ";
    }

    cout << v.data() << endl; // v.data() --> has address of vector
    return 0;
}
