/*
given an integer array 'a', return the prefix sum / running sun in th esame array without creating a new array.
*/

#include <iostream>
#include <vector>
using namespace std;
void sumPrefix(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i - 1] + v[i];
    }
    return;
}

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
        v.push_back(ele);
    }

    sumPrefix(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}