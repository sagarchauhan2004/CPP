// ARRAY OF CHARACTER ----------
#include <iostream>
using namespace std;

int main()
{

    // Declare array
    char message[5]{'h', 'e', 'l', 'l', 'o'}; // this will give garbage value
    // char message[6] {'h', 'e', 'l', 'l', 'o', '\0'};  this will not give garbage value
    /*
      // Print out the araay through looping
      cout << "message : ";
      for (auto c : message)
      {
          cout << c;
      }
      cout << endl;

      //change characters in out array
      message[1] = 'a';
      cout << "message : ";
      for (auto c : message)
      {
          cout << c;
      }
      cout << endl;
      */

    cout << "message : " << message << endl;

    // if a character array is null terminated , it's called as c-string

    char message1[]{'h', 'e', 'l', 'l', 'o', '\0'};
    cout << "message1 : " << message1 << endl;
    cout << "sizeof(message1) : " << sizeof(message1) << endl;

    char message2[6]{'h', 'e', 'l', 'l', 'o'};
    cout << "message2 : " << message2 << endl;
    cout << "sizeof(message2) : " << sizeof(message2) << endl;

    char message3[]{'h', 'e', 'l', 'l', 'o'};// this is not a c strig
                                            // as there is not null char
    cout << "message3 : " << message3 << endl;
    cout << "sizeof(message3) : " << sizeof(message3) << endl;

    // String literal
    char message4[]{"hello wolrd, how are you being"};
    cout << "message4 : " << message4 << endl;
    cout << "sizeof(message4) : " << sizeof(message4) << endl;

    //
    int number[]{1, 2, 3, 4, 5};
    cout << "number : " << number << endl;
    cout << "sizeof(number) : " << sizeof(number) << endl;

    return 0;
}