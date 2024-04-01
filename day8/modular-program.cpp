// modular program---

#include<iostream>
using namespace std;

int fun(int length, int breadth)
{
    return length * breadth;
}
int sun(int length, int breadth)
{
    int p;
    p = 2 * (length + breadth);
    
    return p;
}
int main()
{
    int length = 0, breadth = 0;
    cout << "enter the length : ";
    cin >> length;
    cout << "enter the breadth : ";
    cin >> breadth;

    int area = fun(length, breadth);
    int parameter = sun(length, breadth);

    cout << "area : " << area << endl;
    cout << "parameter : " << parameter << endl;

    return 0;
}
