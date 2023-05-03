#include <stdio.h>

//passing array of structure as arguments
struct Value
{
        int a;
        int b;
};


void print(struct Value arr[])
{
        int i;
        for (i = 0; i < 2; i++)
            printf("%d %d\n", arr[i].a, arr[i].b);
}

int main(void)
{
        struct Value arr[2] = {{3, 5},{4, 6}};
        print(arr);

        return (0);
}