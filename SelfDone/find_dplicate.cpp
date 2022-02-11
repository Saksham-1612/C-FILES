// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
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
int find_duplicate(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
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
    find_duplicate(arr, size);
    printArray(arr, size);
    return 0;
}