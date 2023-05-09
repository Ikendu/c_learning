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
        printf("%d\n", sum);
}

//puts a string function
void putst(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                putchar(str[i]);
                i++;
        }
        putchar('\n');
}
void putsrev(char *str)
{
        int i;
        for (i = strlen(str)-1; i >= 0; i--)
        putchar(str[i]);
}
//MAIN FUNCTION
int main()
{
        update(100);
        strlent("hellogoikj");
        putst("Hello how are you doing");
        putsrev("Hello how are you doing");
}