// count the power of two
#include <bits/stdc++.h>
using namespace std;
int pow2(int power)
{
    if (power == 0)
        return 1;
    return 2 * pow2(power - 1);
}
int main()
{
    int power;
    cin >> power;
    int val = pow2(power);
    cout << val;
    return 0;
}