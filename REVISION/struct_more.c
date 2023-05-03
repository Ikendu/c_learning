#include <stdlib.h>
#include <stdio.h>

struct Value
{
        int m;
        int n;
};
//returning pointer to a structure from a function
struct Value* fun(int a, int b)
{
       struct Value *ptr = (struct Value *)malloc(sizeof(struct Value));
       ptr->m = a + 5 ;
       ptr->n = b * 2;

       return ptr;
}
void print(struct Value *ptr)
{
        printf("%d  %d\n", ptr->m, ptr->n);
}

int main()
{
        struct Value *ptr1, *ptr2;
        ptr1 = fun(3, 6);
        ptr2 = fun(4, 7);
        print(ptr1);
        print(ptr2);
        free(ptr1);
        free(ptr2);

        return (0);
}