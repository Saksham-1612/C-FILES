#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {8, 9, 7, 5, 4};
    for (int i = 0; i < (n - 1); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
    // printing
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}