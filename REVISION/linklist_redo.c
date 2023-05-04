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

                                        /*void insert_node(node *head, int data)
                                        {
                                                node *temp, *ptr;
                                                ptr = head;

                                                temp = malloc(sizeof(node));
                                                temp->data = data;
                                                temp->link = NULL;

                                                while(ptr->link)
                                                {
                                                        ptr = ptr->link;
                                                }
                                                ptr->link = temp;
                                        }*/
//optimum insertion without while-loop
node *insert_nod2(node *ptr, int d)
{
        node *temp = malloc(sizeof(node));
        temp->data = d;
        temp->link = NULL;

        ptr->link = temp;
        return (temp);
}

//insert at the begining of the list
node *insert_begin(node *head, int d)
{
        node *ptr = malloc(sizeof(node));
        ptr->data = d;
        ptr->link = NULL;

        ptr->link = head;
        head = ptr;

        return (head);
}
//insert at a certain position
void insert_pos(node *head, int d, int pos)
{
        node *ptr1 = malloc(sizeof(node));
        ptr1->data = d;
        ptr1->link = NULL;

        node *ptr = head;

        pos--;
        while (pos != 1)
        {
              ptr = ptr->link;
              pos--;
        }
        ptr1->link = ptr->link;
        ptr->link = ptr1;
}
//delete last Node of list
node *delete_node(node *head)
{
    if (head == NULL)
        printf("List is empty");
     else if (head->link == NULL)
     {
             free(head);
             head = NULL;
     }
     else
     {
              node *temp = head;
              //node *temp2 = head;
             while (temp->link->link != NULL)
             {
                     //temp2 = temp;
                     temp = temp->link;
             }
             //temp2->link = NULL;
             temp->link = NULL;
             free(temp->link);
             temp->link = NULL;

     }
     return (head);
}
//deleting at the begining of a node
node *delete_begin(node *head)
{

        if (head == NULL)
        {
                printf("List is already empty");
        }
        else
        {
                node *temp = head;
                head = head->link;
                free(temp);
                temp = NULL;
        }
        return (head);
}
//delete entire link list
node *delete_all(node *head)
{
        node *temp = head;
        while (head != NULL)
        {
                temp = temp->link;
                free(head);
                head = temp;
        }
        return (head);
}

int main()
{
        node *head = malloc(sizeof(node));
        head->data = 50;
        head->link = NULL;

        node *ptr = malloc(sizeof(node));
        ptr->data = 55;
        ptr->link = NULL;

        head->link = ptr;

        ptr = malloc(sizeof(node));
        ptr->data = 60;
        ptr->link = NULL;

        head->link->link = ptr;

        //insert_node(head, 90);
        //insertion without while-loop
        //ptr = head;
        ptr = insert_nod2(ptr, 70);
        ptr = insert_nod2(ptr, 600);
        ptr = insert_nod2(ptr, 700);
        ptr = head;

        ptr = insert_begin(ptr, 400);
        ptr = insert_begin(ptr, 500);
        ptr = insert_begin(ptr, 1000);
        insert_pos(ptr, 401, 3);
        insert_pos(ptr, 402, 4);
        insert_pos(ptr, 403, 4);
        delete_node(ptr);
        ptr = delete_begin(ptr);
        ptr = delete_all(ptr);

        print_list(ptr);

        return(0);

}