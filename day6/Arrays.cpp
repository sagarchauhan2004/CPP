// ARRAYS-------------

#include <iostream>
using namespace std;

int main()
{
    // int count[] = {33, 23, 55, 66, 77, 88, 12, 54};
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << "count : " << count[i] << endl;
    // }

    int scores [] = {8,7,6,5,4,3,2,1};

    int sum{0};

    for(int element : scores){
        sum = sum + element;

    }
    cout<<"score sum : "<<sum<<endl;

    return 0;
}
