// -----------------LOOP----------------------
#include <iostream>
using namespace std;
int main()
{

    // for(int i = 1 ; i <= 100; i ++){
    //     cout<<i<<" : bhupendra jogi"<<endl;
    // }
    // cout<<"loop done!"<<endl;

    // use size_t : a representation of some unsigned int for positive number [sizes]

    for (size_t i{0}; i < 10; ++i)
    {
        cout << i << " : i love c++ " << endl;
    }
    cout << "loop done!" << endl;

    
    sizeof(size_t);
    cout << "sizeof(size_t) : " << sizeof(size_t) << endl;

    // cout<<i<<endl ------compiler error  : i is not in scope
    
    return 0;
}