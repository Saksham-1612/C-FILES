// checking an array is sorted or not with recursive approach
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size)
{
    if (size == 0 | size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
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
    bool result = isSorted(arr, size);
    cout
        << result;
    return 0;
}