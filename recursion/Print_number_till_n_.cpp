#include<iostream>
using namespace std;

void dec(int n){
    if(n == 0){
        return ;
    }
    else{
        dec(n-1);
        cout<<n<<endl;
    }
}

int main(){
    int n ;
    cin>>n;
    dec(n);
    return 0;
}