// Bitset in STL
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bitset<5> bt; // stores 1 and o
    cin >> bt;
    // all -> true or false
    cout << bt.all() << endl;
    // any
    cout << bt.any() << endl; // return if any bit is 1
    // count
    cout << bt.count() << endl; //-> prints only number of bits are 1
    // flip
    cout << bt.flip(2) << endl; //-> flips the bit 1 to 0 or vice versa
    // none
    cout << bool(bt.none()) << endl; //->if all are zero
    return 0;
}