#include <iostream>
#include <stdio.h>

using namespace std;

void printArray(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}
int element_in(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return 0;
}
int Binary_search(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = (end / 2) + (start / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}