#include <iostream>
using namespace std;
int main()
{
    int alice[3], bob[3], a = 0, b = 0, i;
    for (i = 0; i < 3; i++)
    {
        cin >> alice[i];
        cin >> bob[i];

        if (alice[i] > bob[i])
        {
            a++;
        }
        else if (alice[i] < bob[i])
        {
            b++;
        }
    }

    cout << a << " " << b;
    return 0;
}