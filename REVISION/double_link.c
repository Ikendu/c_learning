#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
        struct node *prev;
        int data;
        struct node *next;
}Node;
//function that creates double linker node
Node *createlist(Node *head, int d)
{
         Node *temp = malloc(sizeof(Node));
         temp->next = NULL;
         temp->data = d;
         temp->prev = NULL;
         head = temp;
         return head;
}

int main()
{
        Node *head = NULL;
        int data;
        head = createlist(head, 45);
        printf("%d\n", head->data);

        return (0);
}