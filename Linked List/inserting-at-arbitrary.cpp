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

void insertAtArbitrary(node *&head, int val, int index)
{

   if(index == 0){
        insertAtHead(head , val);
        return;
    }
   
    node * temp = head;
    node * new_node = new node(val);
    int curr_idx = 0;

    while(curr_idx != index - 1){
     temp = temp->next;
     curr_idx ++;
    }

    new_node->next = temp->next;

    temp->next = new_node;
}


int main()
{
    node *head = NULL;

    insertAtHead(head, 8);
    display(head);

    insertAtHead(head, 4);
    display(head);

    insertAtHead(head, 7);
    display(head);

    insertAtArbitrary(head , 6 , 2);
    display(head);
  
}