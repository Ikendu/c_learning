#include <unistd.h>

/*
  _putchar - prints a charater to output
  c: character to be printer
  */
int _putchar(char c)
{
        return(write(1, &c, 1));
}
