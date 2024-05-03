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

void DeleteAlternate(node *&head)
{
    node *curr = head;
    node *temp = head;

    while (curr != NULL) // for even no. of element
    // while (curr->next != NULL) // for odd no. of element
    {
        temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
        curr = curr->next;
    }
}

void insertAtHead(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}
int main()
{
    node *head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 10);
    insertAtHead(head, 15);
    insertAtHead(head, 20);
    insertAtHead(head, 25);
    display(head);
    DeleteAlternate(head);
    display(head);
    return 0;
}