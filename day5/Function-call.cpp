#include <iostream>
using namespace std;
int power(int a, int b) // you can change the parameter variables but not the data type--------------------
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "enter the number a : " << endl;
    cin >> a;
    cout << "enter the number b : " << endl;
    cin >> b;
    int answer = power(a, b);
    cout<<"answer is : "<<answer<<endl;

    return 0;
}
