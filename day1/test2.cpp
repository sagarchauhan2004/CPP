#include<iostream>
using namespace std;

int main(){

   int savings;
   cout<<"enter the budget : ";
   cin>>savings;

   if ( savings > 5000){
     cout<<"enter the amount";
     cin>>savings;
     if(savings > 10000){
        cout<<"road trip with neha";
     } else{
        cout<<"shopping with neha\n";
     }
   }
   else if(savings < 2000){
     cout<<"rashmi";
   }else{
     cout<<"Friends\n";
   }
   return 0;

}