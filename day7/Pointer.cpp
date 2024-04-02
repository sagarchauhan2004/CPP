// POINTERS ------------
#include <iostream>
using namespace std;

int main()
{

    // declare and intialize pointer
    int *p_number{}; // will initialize with nullptr(null pointer)
    double *P_fractional_number{};

    // Explicity intialize with nullptr
    int *P_number1{nullptr};
    int *P_fractional_number1{nullptr};

    cout << "sizeof(int) : " << sizeof(int) << endl;
    cout << "siizeof(double) : " << sizeof(double) << endl;
    cout << "sizeof(double*) : " << sizeof(double *) << endl;
    cout << "sizeof(int*) : " << sizeof(int *) << endl;
    cout << "sizeof(p_number1) : " << sizeof(P_number1) << endl;
    cout << "sizeof(P_ractional_number1)" << sizeof(P_fractional_number1) << endl;

    // intialize pointer and assinging them daat
    // we know that pointers store addresses of variables
    cout << "---------------------------------" << endl;
    int int_var{43};
    int *p_int{&int_var};

    cout << "int var : " << int_var << endl;
    cout << "p_int(address int memory) : " << p_int << endl;
    cout << "-----------------------" << endl;

    // you can also change the address stores in a pointer any time
    int int_var1{65};
    p_int = &int_var1; // assign a different address to thhe pointer
    cout << "p_int(with different address) : " << p_int << endl;

    // cant cross assign between pointer of different types
    int *b_int{nullptr};
    double double_var{33};

    // p_int = & double_var; // compiler error

    // Dereferencing a pointer :
    int *b_int2{nullptr};
    int int_data{56};
    b_int2 = &int_data;

    cout << "value : " << *b_int2 << endl;

    return 0;
}
