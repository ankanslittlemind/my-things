#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *link;
};
void endadd(struct node *, int);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 99;
    current -> link = NULL;

    head -> link = current;

    current = malloc(sizeof(struct node));
    current -> data = 100;
    current -> link = NULL;
    head -> link -> link = current;

    endadd(head, 55);
    endadd(head, 20);
    struct node * ptr = head;
    while (ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> link;
    }

    return 0;
}
void endadd(struct node *head, int data){
    struct node *ptr;
    ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> link = NULL;
    while(ptr -> link != NULL){
        ptr = ptr -> link;
    }
    ptr -> link = temp;    
}
