// This program swaps the alternate elemnts of array with each other
// Input          Output
// [5,8,7,9,1]----->[8,5,9,7]

#include <iostream>
#include <stdio.h>

using namespace std;
// Function to print array
void printArray(int brr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << brr[j] << " ";
    }
}
// Function to take elements of array from user
int element_in(int brr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    return 0;
}
// Function to swap alternate elements of array
void swap_alternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if ((i + 1) < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    element_in(arr, size);
    swap_alternate(arr, size);
    printArray(arr, size);
    return 0;
}