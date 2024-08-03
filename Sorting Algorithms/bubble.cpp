#include <iostream>
#include <algorithm>
using namespace std;

void bubble(int *arr, int n)
{
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main()
{
    int arr[] = {3, 7, 9, 10, 6, 5, 12, 4, 11, 2}, n = 10;

    bubble(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}