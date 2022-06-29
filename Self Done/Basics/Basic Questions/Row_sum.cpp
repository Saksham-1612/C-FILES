// Finding the sum of rows in a 2D Array
#include <iostream>
#include <vector>
using namespace std;
// row wise sum
void printSum(int arr[][4], int rows, int cols)
{
    int sum = 0;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << "Sum of row " << row + 1 << " is : " << sum << endl;
        sum = 0;
    }
}
void print(int arr[][4], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int arr[3][4];
    cout << "Enter the elements for array" << endl;
    // row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    print(arr, 3, 4);
    printSum(arr, 3, 4);
    return 0;
}