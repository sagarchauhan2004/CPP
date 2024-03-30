// Fractional Numbers

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    // Declare and initializaton the variable :
    float number1{1.123456789012345678f};
    double number2{1.1234567890123456789};
    long double number3{1.12345678901234567890};

    // Print out the sizes
    cout << "size of float : " << sizeof(float) << endl;
    cout << "size of double : " << sizeof(double) << endl;
    cout << "size of long double : " << sizeof(long double) << endl;

    // Precesion

    cout << setprecision(20); // control the precision from cout.
    cout << "number1 is :" << number1 << endl; // 7digits
    cout << "number2 is :" << number2 << endl; // 15'ish digits
    cout << "number3 is :" << number3 << endl; // 14+ digits

    return 0;
}
