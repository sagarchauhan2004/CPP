#include <iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle
    {
        int length;
        int breadth;
        
    };

int main()
{
    // struct Rectangle r ={10,5}; // Rectangle r ={10,5};
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;

    // Rectangle *p = &r;

    // HEAP-----------------
    struct Rectangle *p;
    // p=(struct Rectangle *) malloc(sizeof(struct Rectangle)); // in c
    p = new Rectangle; // in c++
    p->breadth =7;
    p->length =15;

   
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    return 0;
}