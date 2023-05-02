#include <stdio.h>
#include <stdarg.h>
#include <string.h>

#define PI 3.14
#define ADD(X) (X+X)
#define MULT(X) (X*X)

void varg_func(int nums, ...)
{
        int i;
        va_list args;
        va_start(args, nums);

        for (i = 0; i < nums; i++)
        {
                int value = va_arg(args, int);
                printf("%d ", value);
        }
        printf("\n");

        va_end(args);
}

int main()
{
        varg_func(4, 5, 2, 5, 8);
        varg_func(3, 4, 9, 3);

        int n = ADD(5) * ADD(5);
        int m = MULT(5);
        printf("%d\n", n);
        printf("%d\n", m);

        printf("Current time: %s\n", __TIME__);
        printf("Current date: %s\n", __DATE__);
        printf("Line Number: %d\n", __LINE__);
        printf("File name: %s\n", __FILE__);
        printf("ANSC: %d\n", __STDC__);


}