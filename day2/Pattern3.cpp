#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)//rows
    {

        for (int j = 1; j <= n; j++)//columns
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}
