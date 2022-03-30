#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void insert(node **head, int new_data)
{
    node *new_node = new node();

    new_node->data = new_data;

    new_node->next = (*head);

    (*head) = new_node;
}

void multiplyWith(node *&head)
{
    node *temp = head;
    while (temp != 0)
    {
        temp->data = (temp->data) * 10;
        temp = temp->next;
    }
}

void display(node *head)
{
    node *temp = head;
    while (temp != 0)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    insert(&head, 6);
    display(head);
    cout << "\nAfter multiplying with 10 : \n";
    multiplyWith(head);
    display(head);
    cout << "\nANKAN DAS\nUID: 20BCS5394\n";
    return 0;
}
