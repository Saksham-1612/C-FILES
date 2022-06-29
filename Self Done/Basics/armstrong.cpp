#include <iostream>

using namespace std;
int main()
{
    int num;
    cin >> num;
    int check;
    check = num;
    int sum = 0;
    int digit;
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        sum = sum + (digit * digit * digit);
    }
    if (sum == check)
    {
        cout << ("Armstrong number");
    }
    else
    {
        cout << ("Not an Armstrong number");
    }
}
