// Implementing a factotrail program using recursion
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    return (n * fact(n - 1));
}
int main()
{
    int n;
    cin >> n;
    int val = fact(n);
    cout << val;
    return 0;
}