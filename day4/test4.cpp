//booleans 

#include<iostream>
using namespace  std;

int main(){
    bool red_light{false};
    bool green_light{true};

    if(red_light == true){
        cout<<"stop! "<<endl;
    }
    else{
        cout<<"Go through "<<endl;
    }
    if(green_light == true  ){
        cout<<"the light is green"<<endl;
    }
    else{
        cout<<"the light is not green "<<endl;
    }

    cout<<"size of bool : "<<sizeof(bool)<<endl;

    cout<<"red light : "<<red_light<<endl;
    cout<<"green light : "<<green_light<<endl;

    cout<<boolalpha<<endl; // it is used to print true false 
    cout<<"red light : "<<red_light<<endl;
    cout<<"green light : "<<green_light<<endl;
    return 0;
}