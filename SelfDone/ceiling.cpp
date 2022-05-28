// find an element that is greater than equal to target
#include <iostream>
using namespace std;

int Ceiling(int arr[], int size, int key)
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
    return start;
}
int main()
{
    int size = 7;
    int key;
    int arr[] = {2, 3, 5, 9, 14, 16, 18};
    // binary search
    int index = Ceiling(arr, size, 15);
    cout << "Number is : " << arr[index] << endl;
    cout << index << endl;
    return 0;
}