/*
1 2 3 4 5 6 7 
2 3 4 5 6 7 1
3 4 5 6 7 1 2
4 5 6 7 1 2 3
5 6 7 1 2 3 4
6 7 1 2 3 4 5
7 1 2 3 4 5 6
*/
#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 7; i++){
        for(int j = i; j <= 7; j++){
            cout<<j<<" ";
        }
        for(int j = 1; j<= (i-1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}