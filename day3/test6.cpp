#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*

    //Printing data
    cout<<"hello c++ " << endl;

    int age{21};
    cout<<"Age : "<<age<<endl;

    cerr<<"Error message : something went wrong"<<endl;
    clog<<"log message : something happend "<<endl;

    */
   /*
    int age1;
    string name;

    cout << "please type your name and age : " << endl;
    // cin>>name;
    // cin>>age1;

    cin >> name >> age1;

    cout << "hello " << name << " you are " << age1 << " year old  " << endl;
      */
     string full_name;
     int age3;

     cout<<"please type your name and age : "<<endl;

     getline(cin,full_name);

     cin>>age3;

     cout << "hello " << full_name << " you are " << age3 << " year old  " << endl;


    return 0;
}