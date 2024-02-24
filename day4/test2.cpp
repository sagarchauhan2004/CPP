// modifiers
#include <iostream>
using namespace std;

int main()
{
    signed value1{10}; // signed is use for +ve or -ve type of integer
    signed value2{-300};

    cout << "value1 : " << value1 << endl;
    cout << "value2 : " << value2 << endl;
    cout << "size of value1 : " << sizeof(value1) << endl;
    cout << "size of value2 : " << sizeof(value2) << endl;

    unsigned int value3{4}; // unsigned is use for +ve type of integer
    // unsigned int value4{-5}; // compiler error

    // short and long
    short short_var{-32768};                 //  2 Bytes
    short int short_int{455};                //
    signed short signed_short{12};          //
    signed short int signed_short_int{-56}; //
    unsigned short int unsigned_short_int{56};

    int int_var{55};           // 4 bytes
    signed signed_var{66};     //
    signed int signed_int{77}; //
    unsigned int unsigned_int{77};

    long long_var{88}; // 4 OR 8 Bytes
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    long long long_long{888}; // 8 Bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    cout << " Short_var          : " << short_var << " , size :" << sizeof(short) << "bytes" << endl;

    cout << " Short_int          : " << short_int << "  , size :" << sizeof(short int) << "bytes" << endl;

    cout << " signed_short       : " << short_var << " , size :" << sizeof(signed short) << "bytes" << endl;

    cout << " signed_short_int   : " << short_var << " , size :" << sizeof(signed short int) << "bytes" << endl;

    cout << " unsigned_short_int : " << short_var << " , size :" << sizeof(unsigned short int) << "bytes" << endl;

    cout << "----------------------------" << endl;

    // and so on-----------------------

    return 0;
}