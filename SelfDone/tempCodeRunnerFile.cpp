#include <iostream>
using namespace std;

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
int main()
{
    int size = 7;
    int key;
    int arr[] = {1, 2, 5, 17, 87, 90, 94};
    // binary search
    int index = Binary_search(arr, size, 90);
    cout << index;
    return 0;
}