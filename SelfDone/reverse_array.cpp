#include <iostream>
using namespace std;
void printArray(int brr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
}
int reverse_array(int brr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(brr[start], brr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[6] = {1, 25, 34, 23, 56, 34};
    printArray(arr, 6);
    reverse_array(arr, 6);
    printArray(arr, 6);
    return 0;
}