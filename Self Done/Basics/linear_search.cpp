#include <iostream>
using namespace std;

void printArray(int brr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << brr[j] << " ";
    }
    cout << endl;
}

int element_in(int brr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    return 0;
}
bool search(int brr[], int n, int no)
{
    for (int i = 0; i < n; i++)
    {
        if (brr[i] == no)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int size, num;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[size];
    element_in(arr, size);
    printArray(arr, size);
    cout << "Enter the number to search" << endl;
    cin >> num;
    bool found = search(arr, size, num);
    if (found)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}