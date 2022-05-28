// find the element in an array that is less than equal to the target
#include <iostream>
using namespace std;

int floor(int arr[], int size, int key)
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
    return end;
}
int main()
{
    int size = 7;
    int key;
    int arr[] = {2, 3, 5, 9, 14, 16, 18};
    // binary search
    int index = floor(arr, size, 15);
    cout << "Number is : " << arr[index] << endl;
    cout << index << endl;
    return 0;
}