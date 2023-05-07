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
int islower(char c)
{
        if (c >= 'a' && c <= 'z')
                printf("its lower");
        else if (c >= 'A' && c <= 'Z')
                printf("its UPPER");
        else
                printf("its not an alphabet");
}

//MAIN FUNCTION
int main(void)
{
        _putchar('c');
        _putchar('\n');

        print_alphabet_x10();

        islower('xZv');

        return (0);
}
