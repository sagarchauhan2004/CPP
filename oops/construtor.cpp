#include <iostream>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;

    Rectangle() // default constructor
    {
        l = 0;
        b = 0;
    }
    Rectangle(int x, int y) // parameterized constructor
    {
        l = x;
        b = y;
    }

    Rectangle(Rectangle &r) // copy constructor
    {
        l = r.l;
        b = r.b;
    }

    ~Rectangle()
    {
        cout << "destructor is called " << endl;
        ;
    }
};

int main()
{
    Rectangle r;
    cout << r.b << " " << r.l << endl;

    Rectangle r2(3, 4);
    cout << r2.b << " " << r2.l << endl;

    Rectangle r3 = r2;
    cout << r3.b << " " << r3.l << endl;

    return 0;
}