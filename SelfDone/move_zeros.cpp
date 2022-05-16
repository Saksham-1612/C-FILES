// Move Zeros to very right
#include <iostream>
#include <vector>
using namespace std;
void movezeros(int arr[], int n)
{
    int NonZero = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[NonZero]);
            NonZero++;
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {2, 0, 3, 0, 0};
    int n = 5;
    movezeros(arr, n);
    print(arr, n);
    return 0;
}