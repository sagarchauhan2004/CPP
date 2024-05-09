#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
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

int getLength(node *head)
{
    node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

node *moveHeadByK(node *head, int k)
{
    node *ptr = head;
    while (k--)
    {
        ptr = ptr->next;
    }
    return ptr;
}
node *getIntersection(node *head1, node *head2)
{

    int l1 = getLength(head1);
    int l2 = getLength(head2);

    node *ptr1;
    node *ptr2;
    if (l1 > l2)
    {
        int k = l1 - l2;
        ptr1 = moveHeadByK(head1, k);
        ptr2 = head2;
    }
    else
    {
        int k = l2 - l1;
        ptr1 = head1;
        ptr2 = moveHeadByK(head2, k);
    }

    while (ptr1)
    {
        if (ptr1 == ptr2)
        {
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}

int main()
{
    LinkedList ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.display();

    LinkedList ll2;
    ll2.insert(6);
    ll2.insert(7);
    ll2.head->next->next = ll1.head->next->next->next;
    ll2.display();

    node *Intersection = getIntersection(ll1.head, ll2.head);
    if (Intersection)
    {
        cout << Intersection->val << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}