// FUNCTION-----------------
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    //pow(a,b)

    int a,b;
    cout<<"enter the vakue of a and b : "<<endl;
    cin>>a>>b;
    

    int ans = 1;
    // for(int i = 1 ; i <=b ; i++){
    //     ans = ans * a;
    // }
    ans = pow(a,b);

    cout<<"ans is : "<<ans<<endl;
    return 0;
}
