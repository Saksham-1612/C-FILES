// Finding which row has largest sum
#include <iostream>
#include <vector>
using namespace std;
// row wise sum
void printLargestSum(int arr[][4], int rows, int cols)
{
    int sum = 0;
    int largest = 0;
    int row_no = 0;
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            sum = sum + arr[row][col];
        }
        if (sum > largest)
        {
            largest = sum;
            row_no = row;
        }
        sum = 0;
    }
    cout << "largest sum: " << largest << " in row : " << row_no + 1 << endl;
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
    printLargestSum(arr, 3, 4);
    return 0;
}