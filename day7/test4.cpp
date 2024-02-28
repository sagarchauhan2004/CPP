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
    // STACK--------------

    // int a[5] = {22,33,44,55,66};
    // int *p;
    // p = a;

    // for(int i = 0; i < 5 ; i++)
    //     cout<<p[i]<<endl;

    // HEAP------------------

    // int *p;
    // // p =(int *)malloc(5*sizeof(int));
    // p = new int[5];
    // p[0]=10;
    // p[1]=11;
    // p[2]=12;
    // p[3]=13;
    // p[4]=14;

    // for (int i = 0; i < 5; i++)
    //     cout << p[i] << endl;
    //     delete []p;

    int *p1;
    float *p2;
    char *p3;
    double *p4;
    struct Rectangle *p5;

    cout<<sizeof(p1)<<endl;// 4 bytes
    cout<<sizeof(p2)<<endl;// 4 bytes
    cout<<sizeof(p3)<<endl;// 4 bytes
    cout<<sizeof(p4)<<endl;// 4 bytes
    cout<<sizeof(p5)<<endl;// 4 bytes
    // what ever the data type of pointer is pointer take same amount of memory------------------
  
    return 0;
}