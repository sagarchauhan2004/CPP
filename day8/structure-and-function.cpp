// structure and function 

#include<iostream>
using namespace std;

struct Rectangle {
    int length ;
    int breadth;
};
void initialise(struct Rectangle *r , int l , int b){
    r->length = l;
    r->breadth = b;
}
int fun(struct Rectangle r)
{
    return r.length * r.breadth;
}
int sun(Rectangle r)
{
    int p;
    p = 2 * (r.length + r.breadth);
    
    return p;
}
int main()
{
    Rectangle r = {0,0};
    int l,b;
    cout << "enter the length : ";
    cin >> l;
    cout << "enter the breadth : ";
    cin >> b;

    initialise(&r, l , b);

    int area = fun(r);
    int parameter = sun(r);

    cout << "area : " << area << endl;
    cout << "parameter : " << parameter << endl;

    return 0;
}
