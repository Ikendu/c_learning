#include <stdio.h>
#include <stdlib.h>

//create node
typedef struct node
{
        struct node *prev;
        int data;
        struct node *next;
}Node;

//create a complete link list from user input
Node *createlist(Node *head)
{
        int i, d, n;

        printf("Enter the number of Nodes: \n");
        scanf(" %d", &n);
        if (n == 0)
           return(head);

        prinf("Enter the element of the list: \n");
        scanf(" &d", &d);
        head = createhead(head, d);

        for (i = 1; i < n; i++)
        {
                printf("Enter the %d node data: \n", i+1);
                scanf(" %d", &d);
                head = addbegin(head, d);
        }
        return head;
}
