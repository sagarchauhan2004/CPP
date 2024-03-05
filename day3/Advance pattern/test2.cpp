/*
        A
      A B C
    A B C D E
  A B C D E F G
A B C D E F G H I
  A B C D E F G
    A B C D E
      A B C
        A
*/
#include <iostream>
using namespace std;

int main()
{
    // ith line : 2 * i - 1
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int no_of_spaces = (n - i);
        {
            for (int k = 0; k < no_of_spaces; k++)
            {
                cout << "  "; // 2 space bcoz : cout << ch << " ";
            }
        }
        for (int j = 0; j < 2 * i - 1; j++)

        {
            char ch = (char)('A' + j);
            cout << ch << " ";
        }
        cout << endl;
    }
    for (int i = 5; i >= 0; i--)
    {
        int no_of_spaces = (n - i);
        {
            for (int k = 0; k < no_of_spaces; k++)
            {
                cout << "  "; // 2 space bcoz : cout << ch << " ";
            }
        }
        for (int j = 0; j < 2 * i - 1; j++)

        {
            char ch = (char)('A' + j);
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
