#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int num, int s, int e)
{

    int mid = s - ((e - s) / 2);
    if (s > e)
        return false;
    if (arr[mid] == num)
        return true;
    if (arr[mid] > num)
        return binarySearch(arr, num, s + (mid + 1), e);
    else
        return binarySearch(arr, num, s, e - (mid - 1));
}
int main()
{
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int arr[size];
    int j = 0;
    for (auto i : arr)
    {

        cout << "Enter " << j++ << "th elements in array : " << endl;
        cin >> i;
    }
    int s = 0;
    int e = size - 1;
    int num = 0;
    cout << "Enter the number : " << endl;
    cin >> num;
    binarySearch(arr, num, s, e) ? cout << "True" : cout << "False";
    return 0;
}