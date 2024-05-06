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

void RemoveDuplicate(node *&head)
{
    node *temp = head;

    while (temp != NULL && temp->next != NULL)
    {
        // node *cur = temp->next;
        if (temp->val == temp->next->val)
        {
            node *duplicate = temp->next;
            temp->next = temp->next->next;
            free(duplicate);
        }
        else
        {
            temp = temp->next;
        }
    }
}

int main()
{
    linkedlist ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(2);
    ll.insert(3);
    ll.insert(3);
    ll.insert(3);
    ll.display();
    RemoveDuplicate(ll.head);
    ll.display();
    return 0;
}