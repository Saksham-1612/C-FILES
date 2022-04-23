#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubblesort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    // ROUNDS
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        // comaprision loop
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main()
{
    int n = 5;
    int arr[n] = {34, 3, 55, 32, 56};
    bubblesort(arr, n);
    print(arr, n);
    return 0;
}