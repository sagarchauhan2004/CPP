#include<iostream>
#include<string>
using namespace std;
void fun(string s){
    if(s.length() == 0)
    return;

    string ros = s.substr(1);
    fun(ros);
    cout<<s[0];

}

int main(){
    string s = "binod"; 
    fun(s);
    return 0;
}