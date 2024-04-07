/*

given an interger array arr, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

note that you must do this in-place without making a copy of the array.

input : 0 5 0 3 42
output : 5 3 42 0 0

*/

#include <iostream>
#include <vector>

using namespace std;
void swapZeorsToEnd(vector<int> &v)
{
    int n = v.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        bool flag = false;
        while (j != i)
        {
            if (v[j] == 0 && v[j + 1] != 0)
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
            j++;
        }
        if (!flag)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cout << "enter size : ";
    cin >> n;

    vector<int> v(n);

    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    swapZeorsToEnd(v);

    cout << "elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}