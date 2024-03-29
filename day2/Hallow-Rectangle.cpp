#include <iostream>
using namespace std;
int main()
{
    char a[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 0 || i == 4 || j == 4)
            {
                cout << a[j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
