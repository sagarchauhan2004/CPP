#include<iostream>
using namespace std;

int main(){
    int car = 1;
    int bus = 2;
    int bike = 3;

    switch(bus){
    case 1 : cout<<"car : 5000";
    break;
    case 2 : cout<<"bus : 60000";
    break;
    case 3 : cout<<"bike : 67890";
    break;
    default : cout<<"it is default case "<<endl;
    }
    return 0;
}