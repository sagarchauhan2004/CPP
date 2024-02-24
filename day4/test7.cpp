// Assignments

#include <iostream>
using namespace std;

int main()
{
    int var1{123}; // Deaclare and initialize
    cout << "var1 : " << var1 << endl;

    var1 = 55; // assign
    cout << "var1 : " << var1 << endl;

    cout << "------------------------------------------" << endl;

    double var2{44.55}; // Deaclare and initialize
    cout << "var2 : " << var2 << endl;

    var2 = 99.99; // assign
    cout << "var2 : " << var2 << endl;
    cout << endl;

    cout << "------------------------------------------" << endl;

    bool var3{false}; // Deaclare and initialize
    cout<<boolalpha;
    cout << "var3 : " << var3 << endl;

    var3 = true; // assign
    cout << "var3 : " << var3 << endl;
    cout << endl;

    //Auto type deduction 
    //carefull about auto assignment 

    auto var4{433u}; // Deaclare and initialize with type deduction
    cout << "var4 : " << var4 << endl;

    var4 = -22; //  Assign negative number. DANGER! . garbage value
    cout << "var4 : " << var4 << endl;
    cout << endl;

    return 0;
}