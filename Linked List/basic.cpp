#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};

int main()
{
    node *n = new node(20);

    cout << "value is : " << n->val << " , " << "location is : " << n->next << endl;

    node *obj = new node(40);

    cout << "obj value is : " << obj->val << endl;

    return 0;
}