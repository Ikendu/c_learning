#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
        int data;
        struct Node *link;
}node;

int main()
{
        node *head = malloc(sizeof(node));
        head->data = 50;
        head->link = NULL;

        node *current = malloc(sizeof(node));
        current->data = 55;
        current->link = NULL;
        head->link = current;

        current = malloc(sizeof(node));
        current->data = 60;
        current->link = NULL;
        head->link->link = current;

        if (!head)
           printf("Empty list\n");
        node *ptr = NULL;
        ptr = head;
        int i = 0;
        while (ptr)
        {
                printf("list(%d) is %d\n", i, ptr->data);
                i++;
                ptr = ptr->link;
        }
}