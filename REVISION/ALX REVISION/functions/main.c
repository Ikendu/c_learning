#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int i, j;

//character printing function
int _putchar(char c)
{
        return (write(1, &c, 1));
}

//print alphabets 10 times
void print_alphabet_x10()
{
        for (i = 0; i < 10; i++)
        {
                for (j = 'a'; j <= 'z'; j++)
                    putchar(j);
                _putchar('\n');
        }
}
//check if its lower of upper
int islower(char c)
{
        if (c >= 'a' && c <= 'z')
                printf("its lower\n");
        else if (c >= 'A' && c <= 'Z')
                printf("its UPPER\n");
        else
                printf("its not an alphabet\n");
}

//prints the acbolute value
int _abs(char n)
{
        if (n < 0)
            return(-1 * n);
        else
            return (n);
 }

//MAIN FUNCTION
int main(void)
{
        _putchar('c');
        _putchar('\n');

        print_alphabet_x10();

        islower('H');

        int n = _abs(--45);
        printf("%d\n", n);

        return (0);
}
