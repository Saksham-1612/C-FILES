// Write a program to perform class to basic conversion[Such as: Class is: Triangle with data members
// base and height(float), and basic type is float(area of triangle).
#include <iostream>
using namespace std;
class Triangle
{
    int base;
    float height;
    float area;

public:
    void getdata()
    {
        cin >> base;
        cin >> height;
    }
    operator float()
    {
        return ((0.5) * base * height);
    }
};
int main()
{
    Triangle T;
    T.getdata();
    float area_triangle = 0;
    area_triangle = T;
    cout << area_triangle;
    return 0;
}