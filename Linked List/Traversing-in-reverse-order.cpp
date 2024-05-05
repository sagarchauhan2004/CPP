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

class linkedlist
{
public:
    node *head;

    linkedlist()
    {
        head = NULL;
    }

    void insert(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }

        node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void RecursiveReverse(node *&head)
{
    if (head == NULL)
        return;
    else
    {
        RecursiveReverse(head->next);
        cout << head->val << "->";
    }
    
}
int main()
{
    linkedlist ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.display();
    RecursiveReverse(ll.head);
    return 0;
}