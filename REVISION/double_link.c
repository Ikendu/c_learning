#include <stdio.h>
#include <stdlib.h>
//typedef NULL null

typedef struct node
{
        struct node *prev;
        int data;
        struct node *next;
}Node;
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

//add at a given position
Node *addpos(Node *head, int d, int pos)
{
        Node *temp = head;
        Node *temp2 = NULL;
        Node *newP = NULL;
        newP = createhead(newP, d);

        pos--;
        while(pos != 1)
        {
                temp = temp->next;
                pos--;
        }
        if (temp->next == NULL)
        {
                newP = temp->next;
                temp->prev = newP;
        }
        else
        {
                temp2 = temp->next;
                temp->next = newP;
                temp2->prev = newP;
                newP->next = temp2;
                newP->prev = temp;
        }
        return head;

}

//function to print list
void printlist(Node *head)
{
        while (head != NULL)
        {
                printf("%d ", head->data);
                head = head->next;
        }
}

int main()
{
        Node *head = NULL;
        Node *ptr;
        int data;
        head = createhead(head, 45);
        head = addbegin(head, 50);
        head = addbegin(head, 51);
        head = addend(head, 60);
        head = addend(head, 61);
        head = addpos(head, 56, 4);
        head = addpos(head, 57, 4);
        ptr = head;
        printlist(ptr);

        return (0);
}