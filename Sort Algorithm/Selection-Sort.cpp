#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(v[i], v[min_index]);
        }
    }
}
int main()
{

    int n;
    cout << "enter size : ";
    cin >> n;

    vector<int> v(n);

    cout << "enter element : ";
    for (int i = 0; i < n ; i++)
    {
        cin >> v[i];
    }

    SelectionSort(v);

    cout << "elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}