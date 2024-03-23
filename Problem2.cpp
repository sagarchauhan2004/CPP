/*
chech if we can partition the array into two subarrays with equal sum.
more formally , check that the prefix sum of a part of  tha array is 
equal to the suffix sum of rest of the array.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "enter size : ";
    cin >> n;

    vector<int> v;

    cout << "enter the element : ";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);\85
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}