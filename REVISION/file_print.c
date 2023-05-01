#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
        int n;
        srand(time(0));
        n = rand() - RAND_MAX;

        if (n > 0 )
           printf("%d is positive\n", n);
        else if (n == 0)
           printf("%d is equal to 0\n", n);
        else
           printf("%d is negative\n", n);

        return (0);
}