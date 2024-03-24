#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    cout << "enter the element : ";
    for (int i = 0; i < 5; i++)
    {
        int element;

        cin >> element;
        v.push_back(element);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;

    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
}