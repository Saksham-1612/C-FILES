#include <iostream>
using namespace std;
int main()
{
    int size = 7;
    int start = 0, end = size - 1, mid, key;
    int arr[size] = {1, 2, 5, 17, 87, 90, 94};
    // binary search
    cout << "Enter the number to find" << endl;
    cin >> key;
    mid = (end + start) / 2;
    while (start < end)
    {
        if (arr[mid] == key)
            cout << "The index of key is " << mid << endl;
        else if (key > mid)
            mid = start;
        else if (key < mid)
            mid = end;
        else
            cout << "Not found" << endl;
    }
    return 0;
}