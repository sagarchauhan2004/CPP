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

void deleteAtHead(node *&head)
{
    node *temp = head;
    head = head->next;
    free(temp);
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
    
    insertAtHead(head, 2);
    display(head);

    insertAtHead(head, 5);
    display(head);

    insertAtHead(head, 9);
    display(head);

    deleteAtHead(head);
    display(head);

    return 0;
}