#include <stdio.h>
#include <stdlib.h>

//create node
typedef struct node
{
        struct node *prev;
        int data;
        struct node *next;
}Node;

//prototypes for the project
Node *createhead(Node *head, int d);
Node *addbegin(Node *head, int d);
Node *addend(Node *head, int d);
Node *addpos(Node *head, int d, int pos);
void printlist(Node *head);
Node *createlist(Node *head);

//create a complete link list from user input
Node *createlist(Node *head)
{
        int d, n, i;

        printf("Enter the number of Nodes:");
        scanf("%d", &n);
        if(n == 0)
             return (head);

        printf("Enter the element of Node 1: ");
        scanf("%d", &d);
        head = addbegin(head, d);

        for(i = 1, i < n; i++)
        {
                printf("Enter the element of Node &d", i+1);
                head = addend(head, d);
        }
        return (head);
}
