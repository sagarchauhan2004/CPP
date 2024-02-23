#include<iostream>
using namespace std;

int main(){
     int a ,b;
     cout<<"input 2 numbers : ";
       cin>>a>>b;

       char op;
       cout<<"input an operator : ";
       cin>>op;

       switch (op)
       {
       case '*':
       cout<<a*b;
        break;
        case '-':
       cout<<a-b;
        break;
        case '+':
       cout<<a+b;
        break;
        case '/':
       cout<<a/b;
        break;
       
       default:
       cout<<"invalid operator";
        break;
       }

      return 0 ;
}