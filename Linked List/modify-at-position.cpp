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

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtHead(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtEnd(node *&head, int val)
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

void insertAtArbitrary(node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }
    node *new_node = new node(val);

    int cur_pos = 0;

    node *temp = head;

    while (cur_pos != pos - 1)
    {
        temp = temp->next;
        cur_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void UpdateAtPosition(node *&head, int val, int k)
{
    node *temp = head;
    int cur_pos = 0;

    while (cur_pos != k)
    {
        temp = temp->next;
        cur_pos++;
    }
    temp->val = val;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 11);
    display(head);

    insertAtHead(head, 22);
    display(head);

    insertAtEnd(head, 33);
    display(head);

    insertAtEnd(head, 44);
    display(head);

    insertAtArbitrary(head, 100, 2);
    display(head);

    // ---------update----------
    UpdateAtPosition(head, 99, 2);
    display(head);

    return 0;
}