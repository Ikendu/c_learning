#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
        int data;
        struct Node *link;
}node;

void print_list(node *head)
{
        if (!head)
           printf("Empty list\n");
        node *ptr = NULL;
        ptr = head;
        int i = 1;
        while (ptr)
        {
                printf("list(%d) is %d\n", i, ptr->data);
                i++;
                ptr = ptr->link;
        }
}

void insert_node(node *head, int data)
{
        node *temp, *ptr;
        temp = malloc(sizeof(node));
        ptr = head;

        temp->data = data;
        temp->link = NULL;

        while(ptr->link)
        {
                ptr = ptr->link;
        }
        ptr->link = temp;
}

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

        insert_node(head, 70);
        insert_node(head, 600);

        print_list(head);

        return(0);

}