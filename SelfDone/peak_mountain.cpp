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