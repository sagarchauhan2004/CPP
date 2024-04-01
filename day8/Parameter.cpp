//Monolithic Program


#include<iostream>
using namespace std;
int main(){
   int length = 0,breadth = 0;
   cout<<"enter the length : ";
   cin>>length;
   cout<<"enter the breadth : ";
   cin>>breadth;
   
   int area = length*breadth;
   int parameter = 2*(length+breadth);

   cout<<"area : "<<area<<endl;
   cout<<"parameter : "<<parameter<<endl;


    return 0;
}
