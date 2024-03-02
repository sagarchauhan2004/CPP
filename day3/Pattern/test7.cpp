/*
1 2 3 4 5 6 
1         6
1         6
1 2 3 4 5 6
*/
#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i<= 4; i++){
        for(int j = 1 ; j<= 6; j++){
            if(i == 1|| i == 4|| j == 1|| j==6){
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}