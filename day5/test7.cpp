// TERNARY OPERATORS------------
#include <iostream>
using namespace std;
int main()
{
   

    int max{};
    
    int a{35};
    int b{20};
    int result{};
    cout << endl;
    cout << "using regular if " << endl;

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    cout<<"max : "<<max<<endl;

     cout << "TERNARY EXPRESSION : result = (condition) ? option1 : option2 "<<endl;
     
     result = (a > b) ? a : b;
    
    cout<<"result : "<<result <<endl;
    return 0;
}