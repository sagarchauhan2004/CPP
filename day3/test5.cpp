#include<iostream>
using namespace std;

  int addNumbers(int first_panoti , int second_panoti)
  {
  int result = first_panoti + second_panoti;
  return result;
  }
int main(){
  

    int first_number {13};
    int second_number {7};

    cout<<"first number : "<<first_number<<endl;
    cout<<"seconf number : "<<second_number<<endl;

    int sum = first_number + second_number ;

    cout<<"the sum of first and second number : "<<sum<<endl;

    sum = addNumbers(32 ,7);
    cout<<"the sum of first and second panoti : "<< sum <<endl;

    sum = addNumbers(43, 76);
    cout<<"sum : "<<sum<<endl;

    sum = addNumbers(45, 67);
    cout<<"yeh le tehelka : "<<sum<<endl;

    int jaggu = addNumbers(34,67);
    cout<<"sum of jaggu : "<<jaggu<<endl;

    jaggu = addNumbers(90, 67);
    cout<<"sum of jaggu : "<<jaggu<<endl;

    cout<<"thala ka sum : "<<addNumbers(5 , 2)<<endl;
    

return 0 ;
}