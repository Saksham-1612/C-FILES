// calculate sum of all elements of an array using recursion
#include <bits/stdc++.h>
using namespace std;
int getSum(int arr[], int size)
{
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];
    int sum = arr[0] + getSum(arr + 1, size - 1);
    return sum;
}
int main()
{
    int arr[5] = {1, 5, 6, 8, 9};
    int sum = getSum(arr, 5);
    cout << sum;

    return 0;
}