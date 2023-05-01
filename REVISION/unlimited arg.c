#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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
}