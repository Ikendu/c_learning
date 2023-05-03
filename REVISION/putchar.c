#include <unistd.h>

int putchar1(char c)
{
        return(write(1, &c, 1));
}

int main(void)
{
        int i = 0;
        char *ptr = "Hello My People";

        for (i = 0; ptr[i] != '\0'; i++)
            putchar1(ptr[i]);

        return (0);

}