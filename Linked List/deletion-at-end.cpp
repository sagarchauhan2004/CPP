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

void deletionAtEnd(node *&head)
{
    node *second_last = head;

    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}
int main()
{
    node *head = NULL;
    insertAtHead(head, 4);
    display(head);

    insertAtHead(head, 6);
    display(head);

    insertAtHead(head , 10);
    display(head);
    
    deletionAtEnd(head);
    display(head);
    return 0;
}