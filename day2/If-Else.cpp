#include<iostream>
using namespace std;

int main(){
    char button ;
    cout<<"input a character :";
    cin>>button;
     
     if(button == 'a') {
        cout<<"hello"<<endl;
     }
     else if(button == 'b'){
        cout<<"namaste";
     }
     else if(button == 'c'){
        cout<<"hola";
     }
     else if(button == 'd'){
        cout<<"jule";
     }
     else if(button == 'e'){
        cout<<"bazinga";
     }
     else{
        cout<<"iam still learning more";
     }
    return 0;

}
