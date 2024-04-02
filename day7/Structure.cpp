// Struct---------------

#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
    char x; 
}/* r1,r2,r3*/;

int main(){
    struct Rectangle r1={10,5};

    cout<<"size of Rectangle r1 : "<<sizeof(r1)<<endl;
    r1.length = 15;
    r1.breadth = 7;
    cout<<"length of Rectangle r1 : "<<r1.length<<endl;
    cout<<"breadth of Rectangle r1 : "<<r1.breadth<<endl;
    
    return 0;
}
