#include <iostream>
using namespace std;
int add(int a, int b)
{
  int sum = a + b;
  return sum;
}
int main()
{
  int a, b, c;
  a = 10;
  b = 20;
  c = add(a, b);

  cout << "the sum of two number is :" << c << endl;
  return 0;
}