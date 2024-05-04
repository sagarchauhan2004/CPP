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

    void insertAtTail(int val)
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

void deleteAlternate(node *&head)
{
    node *cur = head;

    while (cur != NULL && cur->next != NULL)
    {
        node *temp = cur->next;
        cur->next = cur->next->next;
        free(temp);
        cur = cur->next;
    }
}

int main()
{

    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.display();
    deleteAlternate(ll.head);
    ll.display();
    return 0;
}