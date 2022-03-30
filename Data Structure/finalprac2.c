#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int calcSize(struct Node *node)
{
    int size = 0;
    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

void insert(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;

    *head = newNode;
}

void insertPosition(int pos, int data, struct Node **head)
{
    int size = calcSize(*head);
    if (pos < 1 || size < pos)
    {
        printf("Can't insert, %d is not a valid position\n", pos);
    }
    else
    {
        struct Node *temp = *head;
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        while (--pos)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
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
void searchNode(int data, struct Node **head) {  
    struct Node *current = *head;  
    int i = 1;  
    int flag = 0;  
    if(head == NULL) {  
        printf("List is empty \n");  
    }  
    else {  
        while(current != NULL) {  
            if(current->data == data) {  
                flag = 1;  
                break;  
            }  
            i++;  
            current = current->next;  
        }  
    }  
    if(flag == 1)  
         printf("Element is at the position: %d\n", i);  
    else  
         printf("Element not foundt\n");  
}  
int main()
{
    int menu;
    struct Node *head = NULL;
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    printf("Linked list is : \n");
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
            insertPosition(pos, data, &head);
            printf("Inserted %d after %d", data, pos);
        }
        break;
        case 2:
        {
            int element;
            printf("Enter element: ");
            scanf("%d", element);
            searchNode(element, &head);
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
}