#include <iostream>
using namespace std;
int main()
{
    int c;
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *new_node, *temp{head = 0};

    

    new_node = (struct node *)malloc(sizeof(struct node));
    cout << "Enter data : ";
    cin >> new_node->data;
    new_node->next = 0;
    if (head == 0)
    {
        head = temp = new_node;;
    }
    temp -> next = new_node;
    temp = new_node;
    

    temp = head;
    while (temp != 0)
    {
        cout << temp -> data;
        temp = temp -> next;
    }

    return 0;
}