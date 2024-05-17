#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result = result - i;
        }
        else
        {
            result = result + i;
        }
    }
    cout << result;
    return 0;
}