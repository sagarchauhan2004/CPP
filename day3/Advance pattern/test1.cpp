/*
A B C D E F G H I 
A B C D E F G H I 
A B C D E F G H I 
A B C D E F G H I 
A B C D E F G H I
*/
#include <iostream>
using namespace std;
int main()
{
    int no_of_char = 9;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j < no_of_char; j++)
        {
            char ch = (char)('A' + j);
            cout << ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}