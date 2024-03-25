#include<iostream>
#include<math.h>
using namespace std;
int fun(int n, int m){
    if(m==0){
    return 1;
    }
    else{
       int prev = fun(n , m -1);
       return n * prev;
    }
}

int main(){
    int n ;
    cout<<"enter the number : ";
    cin>>n;
    int m;
    cout<<"enter the power : ";
    cin>>m;

    cout<<fun(n , m);
    return 0;
}