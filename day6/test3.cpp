//  SIZE OF AN ARRAY----------

#include<iostream>
using namespace std;

int main(){

    int scores[] {1,2,3,4,5,6,7,8,8,5,5,5,5};

    cout<<"sizeof(scores) : " << sizeof(scores) <<endl;

    cout<<"sizeof(scores [0]) : "<< sizeof(scores[0])<<endl;

    int count {sizeof(scores)/sizeof(scores[0])};

     for(size_t i {0}; i < count ; ++i){

         cout<<"scores [" << i << "] :" << scores[i] << endl;
     }

    return 0 ;
}