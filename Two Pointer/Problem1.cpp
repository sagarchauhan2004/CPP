// sort an array consisting of only 0s and 1s 


#include <iostream>
#include <vector>
using namespace std;

void sortZerosAndOnes(vector<int> &v){
    
    int zero  = 0;
    for(int ele:v){
        if(ele == 0){
              zero ++;
        }
    }
    for(int i = 0 ; i < v.size(); i++){
        if(i<zero){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }

}

int main()
{
    int n;
    cout << "enter size : ";
    cin >> n;

    vector<int> v;

    cout << "enter the element : ";
    for (int i = 0; i < n; i++)
    {
       int ele; cin>>ele;
       v.push_back(ele);
    }
    
    sortZerosAndOnes(v);

    for(int i = 0 ; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}