// Let's call an array arr a mountain if the following properties hold:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... arr[i-1] < arr[i]
// arr[i] > arr[i+1] > ... > arr[arr.length - 1]
// Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

#include <iostream>
using namespace std;

int peak(int arr[], int n)
{
    int end = n;
    int start = 0, mid = 0;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return mid;
}
int main()
{
    int arr[6] = {1, 3, 5, 7, 4, 2};
    int max = peak(arr, 6);
    cout << "Index of peak element is " << max << endl;
    cout << "The peak number is " << arr[max] << endl;
    return 0;
}