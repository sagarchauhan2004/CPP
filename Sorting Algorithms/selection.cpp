#include <iostream>
using namespace std;

void selection(int a[], int n)
{
    int i, j, k;

    for (int i = 0; i < n - 1; i++)
    {
        for (j = k = i; j < n; j++)
        {
            if (a[j] < a[k])
                k = j;
        }
        int temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }
}

int main()
{
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    selection(a, 10);

    for (int &i : a)
    {
        cout << i << " ";
    }

    return 0;
}