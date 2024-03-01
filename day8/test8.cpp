// object oriented programming practice-------

#include <iostream>
using namespace std;
class Rectangle
{
    public: // the class is private by default so we use public
    int length;
    int breadth;

    void intialise(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int sun()
    {
        return length * breadth;
    }
    int fun()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }
};

int main()
{
    Rectangle r ;
    int l;
    int b;
    cout << "enter the length : ";
    cin >> l;
    cout << "enter the breadth : ";
    cin >> b;
    r.intialise(l, b);

    int area = r.sun();
    cout << "area : " << area << endl;

    int parameter = r.fun();
    cout << "parameter : " << parameter << endl;
}