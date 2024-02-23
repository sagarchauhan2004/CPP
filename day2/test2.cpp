#include<iostream>
using namespace std;

int main(){
     char button ;
     cout<<"input the character : ";
     cin>>button;

     switch(button){
        case'a':
        break;
        case 'b':
        cout<<"namste"<<endl;
        break;
        case 'c':
        cout<<"hola"<<endl;
        break;
        case 'd':
        cout<<"julle"<<endl;
        break;
        case 'e':
        cout<<"arey shabji"<<endl;
        break;
        case 'f':
        cout<<"salut"<<endl;
        break;

         default:{
            cout<<"iam still learning more";
            break;
         }
     }
      return 0 ;
}