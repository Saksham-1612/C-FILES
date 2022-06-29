#include <iostream>
#include <vector>
using namespace std;

bool isPresent(int arr[][4], int target, int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4];
    // row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    // col wise input
    /*
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
    }
    */
    // printing
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << "Enter the number to search" << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 3, 4))
    {
        cout << "present in the array" << endl;
    }
    else
        cout << "not present in the array" << endl;
    return 0;
}