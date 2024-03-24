#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int v[] = {1,2,3,4,5,77,7};

    bool sorted = true;
    for (int i = 1; i < 7; i++)
    { 
        if(v[i] <= v[i- 1]){
           sorted = false;
        }
    }

    cout<<sorted<<endl;
    return 0;
}