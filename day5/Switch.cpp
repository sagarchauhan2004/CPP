// SWITCH---------
#include<iostream>
// tools 
const int pen{10};
const int marker{20};
const int eraser{30};
const int rectangle{40};
const int circle{50};
const int ellispe{60};
const int bird{70};
// const cannot be modifiy

using namespace std ;
int main(){

    int tool {marker};

    switch (tool)
    {
    case pen : {
        cout<<"Active tool is pen "<<endl;
    }
        break;
        case marker : {
        cout<<"Active tool is marker "<<endl;
    }
        break;
        case eraser: {
        cout<<"Active tool eraser "<<endl;
    }
        break;
        case rectangle : {
        cout<<"Active tool is rectangle "<<endl;
    }
        break;
        case circle : {
        cout<<"Active tool is circle "<<endl;
    }
        break;
        case ellispe : {
        cout<<"Active tool is ellispe "<<endl;
    }
        break;
    
    default:{
        cout<<"tool not found "<<endl;
    }
        break;
    }
    cout<<"moving on...."<<endl;

    return 0 ;
}
