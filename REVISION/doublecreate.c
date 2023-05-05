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
Node *delnode1(Node *head);
Node *delastnode(Node *head);

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

//Deleting the first node of the list
Node *delnode1(Node *head)
{
        head = head->next;
        free(head->prev);
        head->prev = NULL;

        return head;
}

//Deleting the last node
Node *delastnode(Node *head)
{
        Node *temp = head, *temp2;

        while (temp->next != NULL)
        {
                temp = temp->next;
        }
        temp2 = temp->prev;
        temp2->next = NULL;
        free(temp);
        temp = NULL;

        return (head);
}

//Deleting an intermediate node
Node *delintermid(Node *head, int pos)
{
        Node *temp = head, *temp2 = NULL;

        if (pos == 1)
           return(head);

        while (pos > 1)
        {
                temp = temp->next;
                pos--;
        }
        if (temp->next == NULL)
                head = delastnode(head);
        else if (temp == NULL)
                return (head);
        else
        {
                temp2 = temp->prev;
                temp2->next = temp->next;
                temp->next->prev = temp2;
                free(temp);
                temp = NULL;
          }


        return (head);
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

//reversing the list...more learning is needed here
Node *reverselist(Node *head)
{
        Node *ptr1 = head;
        Node *ptr2 = ptr1->next;

        ptr1->next = NULL;
        ptr1->prev = ptr2;

        while (ptr2 != NULL)
        {
                ptr2->prev = ptr2->next;
                ptr2->next = ptr1;
                ptr1 = ptr2;
                ptr2 = ptr2->prev;
        }
        head = ptr1;
        return (head);
}

int main(void)
{
        int x;

        Node *head = NULL;
        head = createlist(head);

        printf("Using the complete nodes...");
        printlist(head);

        printf("Reversing the list completely");
        head = reverselist(head);
        printlist(head);

        printf("After deleting the first node...");
        head = delnode1(head);
        printlist(head);

        printf("After deleting the last node...");
        head = delastnode(head);
        printlist(head);

        printf("Enter 0 to delete an intermidiate node or 1 to stop...");
        scanf("%d", &x);
        if (x == 0)
        {
                printf("After deleting the last node");
                head = delastnode(head);
                printlist(head);
        }
        else return;

        return (0);
}