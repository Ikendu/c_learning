#include <stdlib.h>
#include <stdio.h>

struct Value
{
        int m;
        int n;
};
//returning pointer to a structure from a function
struct Value *fun(int a, int b)
{
        struct Value *ptr = malloc(sizeof(struct Value));
        ptr->m = a * 3;
        ptr->n = b * 2;

        return (ptr);
}
int main(void)
{
        struct Value *ptr1, *ptr2;
        ptr1 = fun(3, 5);
        ptr2 = fun(4, 6);
        printf("%d  %d\n", ptr1->m, ptr1->n);
        printf("%d  %d\n", ptr2->m, ptr2->n);

        free(ptr1);
        free(ptr2);

        return (0);
}