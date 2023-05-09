#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

//prints reverse of a sting
void putsrev(char *str)
{
        int i;
        for (i = strlen(str)-1; i >= 0; i--)
        putchar(str[i]);
        putchar('\n');
}

//prints one character out of two
void print2(char *s)
{
        int i;

        for (i = 0; i < s[i]; i++)
        {
                if (i%2 == 0)
                putchar(s[i]);
        }
        putchar('\n');
}

//print half of a string
void printhalf(char *str)
{
        int i;
        int m;

        if (strlen(str) % 2 == 0)
        {
                i = (strlen(str)) / 2;
        }
        else
        {
                i = ((strlen(str)) - 1) / 2;
        }

        for (i++; i < (strlen(str)); i++)
        {
                putchar(str[i]);
        }
        putchar('\n');
        for (i = 0; i < strlen(str)/2; i++)
                putchar(str[i]);

        putchar('\n');
}

//print n number of an array
void printarr(int *a, int n)
{
        int i;
        int len = 0;

        for (i = 0; i < a[i]; i++)
            len += i;

        if (++len < n)
        {
                printf("The items are only %d in number\n", len);
        }else
        {
                for (i = 0; i < n; i++ )
                {
                        printf("%d", a[i]);

                        if (i < n-1)
                        printf(", ");
                }
                printf("\n");
        }
}

// concatenates string
void concate(char dest[], char src[])
{
        int i, j;
        for (i = 0; dest[i] != '\0'; i++)
        ;
        for (j = 0; src[j] != '\0'; j++)
        {
                dest[i + j] = src[j];
        }
        dest[i+j] = '\0';
}
void concate2(char dest[], char src[], int n)
{
        int i, j;

        for (i = 0; dest[i] != '\0'; i++)
        ;
        for (j = 0; j < n && src[j] != '\0'; j++)  //j<n counts the number to append
        {
                dest[i + j] = src[j];
        }
        dest[i+j] = '\0';
}

//MAIN FUNCTION
int main()
{
        //update(100);
        strlent("hellogoikj");
        putst("Hello how are you doing");
        putsrev("Hello how are you doing");
        print2("Goodmorning");
        printhalf("Greatnessi");

        int arr[] = {2, 4, 5, 6, 4, 4, 2};
        printarr(arr, 7);

        char *arr1 = "36465";

        printf("%d\n", atoi(arr1) * 2);

        char ar[] = "Hello";
        char ar2[] = "Greatness";

        concate(ar, ar2);
        printf("%s\n", ar);

        concate2(ar, ar2, 5);
        printf("%s\n", ar);

        return (0);
}