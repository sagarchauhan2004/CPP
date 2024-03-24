#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v[] = {1, 2, 3, 4, 5, 6, 7};

    int sum = 0;
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + v[i];
        }
        else
        {
            sum = sum - v[i];
        }
    }

    cout << sum << endl;
    return 0;
}