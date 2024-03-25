#include<iostream>
using namespace std;

int fun(int n){
    if(n == 0){
        return 0;
    }
    else{
       int prev =  fun(n-1);
        return prev + n;
    }
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    cout<<fun(n)<<endl;
}