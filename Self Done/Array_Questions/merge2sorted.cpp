#include <iostream>
#include <vector>
using namespace std;
void merge2sort(int arr[], int n, int brr[], int m, int frr[])
{
    int i, j, k = 0;
    while (i < n && j < m)
    {
        if (arr[i] < brr[j])
        {
            frr[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            frr[k] = brr[j];
            k++;
            j++;
        }
    }

    while (i < n)
    {
        frr[k] = arr[i];
        k++;
        i++;
    }
    while (j < m)
    {
        frr[k] = brr[j];
        k++;
        j++;
    }
    for (int l = 0; l < 8; l++)
    {
        cout << frr[l] << " ";
    }
}
int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    int brr[3] = {2, 4, 6};
    int frr[8] = {0};
    merge2sort(arr, 5, brr, 3, frr);
    return 0;
}
