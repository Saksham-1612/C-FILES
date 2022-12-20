#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, j = 0;
    cin >> n;
    n++;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            arr[i] = -1;
            cout << "Duplicates are not allowed";
            return 0;
        }
    }
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1 && arr[i] != -1)
        {
            cout << arr[i] << " ";
        }
        else if (arr[i] != -1)
        {
            ar[j] = arr[i];
            j++;
        }
    }
    for (int i = j - 1; i >= 0; i--)
    {
        cout << ar[i] << " ";
    }
    return 0;
}