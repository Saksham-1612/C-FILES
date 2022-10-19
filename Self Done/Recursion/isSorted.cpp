// checking an array is sorted or not with recursive approach
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size)
{
    if (size == 0 | size == 1)
    {
        return true;
    }
    if (arr[0] > 1 [arr])
    {
        return true;
    }
    else
    {
        return isSorted(arr + 1, size - 1);
    }
}
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int size = sizeof(arr) / sizeof(arr[0]);
    isSorted(arr, size) ? cout << "True" : cout << "False";
    return 0;
}