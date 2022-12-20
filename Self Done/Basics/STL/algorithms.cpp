// Using algorithm of STL
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    for (int i : arr)
        cout << i << " ";
    cout << endl;
    reverse(arr, arr + n);
    for (int i : arr)
        cout << i << " ";
    cout << endl;
    //  *max_element gives maximum elemnt in an array
    int element_max = *max_element(arr, arr + n);
    cout << "Maximum elemnt in array is : " << element_max << endl;
    // *min_element gives the minimum elment in the array
    int element_min = *min_element(arr, arr + n);
    cout << "Minimum elemnt in array is : " << element_min << endl;
    // gives the sum of a range
    // accumulate(startiterator,enditerrator,initialsum)
    int sum = accumulate(arr, arr + n, 0);
    int cnt = count(arr, arr + n, 1);
    
    return 0;
}