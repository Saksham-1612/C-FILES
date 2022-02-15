#include <iostream>
using namespace std;

int first_occ(int arr[], int n, int k)
{
    int s = 0, e = n;
    int mid = 0;
    int ans = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
    }
    return ans;
}

int last_occ(int arr[], int n, int k)
{
    int s = 0, e = n;
    int mid = 0;
    int ans = 0;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (k > arr[mid])
        {
            s = mid + 1;
        }
        else if (k < arr[mid])
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 3, 5};
    int fans = first_occ(arr, 5, 3);
    int lans = last_occ(arr, 5, 3);
    cout << "The first index is " << fans << " and last index is " << lans << endl;
    return 0;
}