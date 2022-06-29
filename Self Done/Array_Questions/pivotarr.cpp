#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = (end / 2) + (start / 2);
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int main()
{
    int size = 5;
    int arr[] = {7, 9, 1, 2, 3};
    // pivot of array
    cout<<"running"<<endl;
    int index = pivot(arr, size);
    cout<<"done"<<endl;
    cout << index<<endl;
    return 0;
}