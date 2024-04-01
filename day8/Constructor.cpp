// contructor---------

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int parameter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    ~Rectangle()
    {
        cout << "destructor ";
    }
};

int main()
{
    Rectangle r(10, 5);
    cout << "area : " << r.area() << endl;
    cout << "parameter : " << r.parameter()<< endl;

    return 0;
}
