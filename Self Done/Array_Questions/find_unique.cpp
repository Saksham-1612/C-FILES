// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.

#include <iostream>
#include <stdio.h>

using namespace std;

void printArray(int brr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << brr[j] << " ";
    }
}
int element_in(int brr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    return 0;
}
int find_unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    element_in(arr, size);
    int ans = find_unique(arr, size);
    cout << ans;
    // printArray(arr, size);
    return 0;
}