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

node *mergeLinkedList(node *&head1, node *head2)
{
    node *dummyHeadNode = new node(-1);

    node *ptr1 = head1;
    node *ptr2 = head2;
    node *ptr3 = dummyHeadNode;

    while (ptr1 && ptr2)
    {
        if (ptr1->val < ptr2->val)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }
    if (ptr1)
    {
        ptr3->next = ptr1;
    }
    else
    {
        ptr3->next = ptr2;
    }
    return dummyHeadNode->next;
}

int main()
{
    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(3);
    ll1.insert(5);
    ll1.display();

    linkedlist ll2;
    ll2.insert(2);
    ll2.insert(4);
    ll2.insert(6);
    ll2.display();

    linkedlist ll3;
    ll3.head = mergeLinkedList(ll1.head, ll2.head);
    ll3.display();
}