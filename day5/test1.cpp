// Operations on Data

#include <iostream>
using namespace std;

int main()
{
    // Addition
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    cout << "the sum is            : " << result << endl;

    result = number1 - number2;
    cout << "the sub is            : " << result << endl;

    result = number2 - number1;
    cout << "the sub is            : " << result << endl;

    result = number1 * number2;
    cout << "the mul is            : " << result << endl;

    result = number2 / number1;
    cout << "the div is            : " << result << endl;

    result = number2 % number1;
    cout << "the mod is            : " << result << endl;

    result = 31 % 10;// how many times can 10 fit in 31 & the rest is reminder(mod).
    cout << "the mod of 30 % 10 is : " << result << endl;

    return 0;
}