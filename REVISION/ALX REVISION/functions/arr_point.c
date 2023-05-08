#include <stdio.h>
#include <stdlib.h>

//int i, j, k, x, y;
//updates an int pointer 98
void update(int *n)
{
     n = 98;

     printf("%d\n", n);
}

//swap integers
void swap(int *n, int *m)
{
        int *i = n;
        n = m;
        m = i;
}

//MAIN FUNCTION
int main()
{
        update(100);
}