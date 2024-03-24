#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(6);
    cout << "ENTER THE ELEMENT : ";
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "ENTER X : ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > x)
        {
            count++;
        }
    }
    cout << "count : " << count << endl;
    return 0;
}