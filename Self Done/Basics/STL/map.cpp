// maps in STL
#include <bits/stdc++.h>
using namespace std;
void print(map<string, int> mp)
{
    for (auto &&i : mp)
    {
        cout << i.first << " " << i.second << endl;
    }
}
int main()
{
    map<string, int> mp;
    mp["Saksham"] = 15;
    mp["Vikrant"] = 105;
    mp["Shreyansh"] = 10005;
    mp["Abishek"] = 15;
    mp.emplace("TOTO", 18);
    print(mp);
    return 0;
}