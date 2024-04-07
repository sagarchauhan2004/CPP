#include <iostream>
#include <vector>
using namespace std;
void InsertionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int current = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > current)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = current;
    }
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter element : ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    InsertionSort(v);

    cout << "Elements are : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}