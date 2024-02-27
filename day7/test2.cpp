#include<iostream>
using namespace std;

int main(){
    //can use normal pointer to char like we've been doing for
    // double int and anything else really.

    // char *p_char_var{nullptr};
    // char char_var {'A'};

    // p_char_var = &char_var;

    // cout<<"the value stored in p_char_var is : "<<p_char_var<<endl;

    // char char_var1{'C'};
    // p_char_var = &char_var1;

    // cout<<"the value stored in p_char var is : "<<*p_char_var<<endl;
    
    const char * message {"hello world"};

    cout<<"message : "<<message<<endl;

    return 0;
}