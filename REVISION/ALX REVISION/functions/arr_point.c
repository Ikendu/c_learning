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
        int i = *n;
        *n = *m;
        *m = i;
}

//returns the length of a string
int strlent(char *s)
{
        int i, sum = 0;
        for (i = 0; s[i] != '\0'; i++)
        {
                sum ++;
        }
        printf("%d", sum);
}
//MAIN FUNCTION
int main()
{
        update(100);
        strlent("hellogoikj");
}