// ---------------------- Nested If  Statements----------------

#include <iostream>
using namespace std;

int main()
{
  bool red = false;
  bool green  {true};
  bool yellow  {false};
  bool police_stop {true};

//   if(red){
//     cout<<"stop if red "<<endl;
//   }
//   if(yellow){
//     cout<<"slow down if yellow "<<endl;

//   }
//   if(green){
//     cout<<"go ahead if green "<<endl;
//   }
//   if(police_stop){
//     cout<<"please stop if poilce say stop ";
//   }

//   cout<<endl;
//   cout<<"police officer stops(verbose)"<<endl;
//   if(green){
//     if(police_stop){
//         cout<<"please stop"<<endl;
//     }
//     else{
//         cout<<"go"<<endl;
//     }
//   }

  cout<<endl;
   cout<<"police officer stops(verbose)"<<endl;
   if(green && !police_stop){
      cout<<"go"<<endl;
    }else{
         cout<<"stop"<<endl;
     }
   


  return 0;
}
