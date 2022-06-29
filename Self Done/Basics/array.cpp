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
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    element_in(arr, size);
    printArray(arr, size);
    return 0;
}