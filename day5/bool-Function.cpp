#include<iostream>
using namespace std;

// 1 --> Even
// 0 --> odd
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cout<<"enter the num"<<endl;
    cin>>num;
   int ans= isEven( num);
   cout<<"ans : "<<ans<<endl;
    return 0;
}
