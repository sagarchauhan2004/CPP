#include<iostream>
using namespace std;
// 1 = prime number
// 0 = not a prime number 
bool isPrime(int n){
    for(int i = 2; i < n; i++){
        // diivide hogya not a prime number ----
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    
    int n;
    cout<<"enter the number : ";
    cin>>n;
    if(isPrime(n)){
       cout<<" is a prime number  "<<endl;
    }
    else{
        cout<<"not a prime nnumber ! "<<endl;
    }
    return 0;
}
