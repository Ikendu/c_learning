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

//function that creates double linker node
Node *createhead(Node *head, int d)
{
         Node *temp = malloc(sizeof(Node));
         temp->next = NULL;
         temp->data = d;
         temp->prev = NULL;
         head = temp;
         return head;
}

//function to create the next nodes
Node *addbegin(Node *head, int d)
{
        Node *temp = malloc(sizeof(Node));
        temp->prev = NULL;
        temp->data = d;
        temp->next = NULL;

        temp->next = head;
        head->prev = temp;
        head = temp;

        return(head);
}

//add at the end of the list
Node *addend(Node *head, int d)
{
        Node *tp = head;
        Node *temp = malloc(sizeof(Node));
        temp->prev = NULL;
        temp->data = d;
        temp->next = NULL;

        while (tp->next != NULL)
              tp = tp->next;
        tp->next = temp;
        temp->prev = tp;

        return (head);
}

//function to print list
void printlist(Node *head)
{
        int sum = 0;
        int mult = 1;
        printf("The members of the list are:\n");
        while (head != NULL)
        {
                printf("%d ", head->data);
                sum += head->data;
                mult *= head->data;
                head = head->next;
        }
        printf("\nThe sum of all members is %d\n", sum);
        printf("\nThe multiplication of all members is %d\n", mult);
}
//create a complete link list from user input
Node *createlist(Node *head)
{
        int d, n, i;

        printf("Enter the number of Nodes: ");
        scanf("%d", &n);
        if(n == 0)
             return (head);

        printf("Enter the element of Node 1: ");
        scanf("%d", &d);
        head = createhead(head, d);

        for(i = 1; i < n; i++)
        {
                printf("Enter the element of Node %d: ", i+1);
                scanf("%d", &d);
                head = addend(head, d);
        }
        return (head);
}

//Deleting the first node of the list
Node *delnode1(Node *head)
{
        head = head->next;
        free(head->prev);
        head->prev = NULL;

        return head;
}

int main(void)
{
        Node *head = NULL;
        head = createlist(head);

        printf("Before deleting the first...");
        printlist(head);

        printf("After deleting the first...");
        head = delnode1(head);
        printlist(head);

        return (0);
}