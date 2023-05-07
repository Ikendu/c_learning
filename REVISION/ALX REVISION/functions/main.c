#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//character printing function
int _putchar(char c)
{
        return (write(1, &c, 1));
}

//print alphabets 10 times
void print_alphabet_x10()
{
        int i, j;

        for (i = 0; i < 10; i++)
        {
                for (j = 'a'; j <= 'z'; j++)
                    putchar(j);
                _putchar('\n');
        }
}

//MAIN FUNCTION
int main(void)
{
        _putchar('c');
        _putchar('\n');

        print_alphabet_x10();
        
        return (0);
}
