#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertafter(struct Node **head, int data, int after)
{
    struct Node *new_node = NULL;
    struct Node *tmp = head;
    while (tmp)
    {
        if (tmp->data == after)
        {
            new_node = (struct Node *)malloc(sizeof(struct Node));
            if (new_node == NULL)
            {
                printf("Failed to insert element. Out of memory");
            }
            new_node->data = data;
            new_node->next = tmp->next;
            tmp->next = new_node;
            return;
        }
        tmp = tmp->next;
    }
}
void display(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL");
    printf("\n");
}

int main()
{
    int menu;
    struct Node *head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    printf("\n Created Linked list is: ");
    display(head);
    while (menu != 4)
    {
        printf("\n---MENU---");
        printf("\n1. Insert element at position\n2. Search element\n3. Display elements\n4. Quit");
        printf("\nEnter menu number: ");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
        {
            int data, pos;
            printf("Enter element: ");
            scanf("%d", data);
            printf("Enter position: ");
            scanf("%d", pos);
            insertafter(&head, data, pos);
        }
        break;
        case 2:
        {
        }
        break;
        case 3:
        {
            printf("Linked list is : \n");
            display(head);
        }
        break;
        case 4:
            break;
        default:
        {
            printf("Invalid input");
        }
        }
    }
    printf("\nANKAN DAS\nUID: 20BCS5394");
    return 0;

    return 0;
}
