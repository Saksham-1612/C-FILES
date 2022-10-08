// Sets in STL
#include <bits/stdc++.h>
using namespace std;
void print(set<int> st)
{
    for (auto &&i : st)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    set<int> st;
    st.insert(5);
    st.insert(3);
    st.insert(4);
    print(st);
    st.erase(1);
    print(st);
    cout << st.count(3) << endl;
    return 0;
}