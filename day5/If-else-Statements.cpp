// ----------------------If else Statements----------------

#include <iostream>
using namespace std;

int main()
{
  int number1{70};
  int number2{60};

  bool result = (number1 < number2);
  
  //cout<<"----------------------if statements--------------------"<<endl
  // if (number1 < number2)
  // {
  //   cout << "the num1 is lesser than num2 " << endl;
  // }
  // if (number1 > number2)
  // {
  //   cout << "the num1 is greater then num2 " << endl;
  // }

  cout << endl;
  cout << "-----------------using the else clause-----------------: " << endl;

  cout << boolalpha << "result : " << result << endl;

  if (result == true)
  {
    cout << number1 << " is less than " << number2 << endl;
  }
  else
  {
    cout << number1 << " is not less than " << number2 << endl;
  }

  return 0;
}
