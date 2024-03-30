#include<iostream>
using namespace std;

int main(){
    int a ;
    cout<<"enter the numbers : "<<endl;
    cin>>a;

    if(a%2 == 0){
        cout<<a<<endl;
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }

    return 0;
}
