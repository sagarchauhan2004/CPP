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

class LinkedList
{
public:
    node *head;

    LinkedList()
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

void removeKthNodeFromEnd(node *&head, int k)
{
    node *ptr1 = head;
    node *ptr2 = head;

    int count = k;
    while (count--) // while count == 0
    {
        ptr2 = ptr2->next;
    }

    if (ptr2 == NULL)
    {
        node *temp = head;
        head = temp->next;
        free(temp);
        return;
    }

    while (ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    node *temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
}

int main()
{
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    ll.insert(6);
    ll.display();
    removeKthNodeFromEnd(ll.head, 3);
    ll.display();
}