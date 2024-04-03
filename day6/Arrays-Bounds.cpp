// Array Bounds----------------
#include<iostream>
using namespace std;

int main(){
    int number[] {1,2,3,4,5,6,7,8,9,0};

    // Read beyond bounds : will read garbage or crash your program
    cout<<"number[12] : "<<number[12]<<endl;
    
    //wrtie beyond bounds. the complier allow it. but you dont own
    // the memory at index 12, so other programs may modify it and your
    // program may read bogus data at a later time. or you can even
    //corrupt data used by other parts of your programs

    number[125555] = 1200; // the program will end here 
    cout<<"number[12] : "<<number[125555]<<endl;

    cout<<"program ending "<<endl;

return 0 ;
}
