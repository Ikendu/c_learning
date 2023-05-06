#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
//program prints both lowercase and upper case.
          int i;
          for (i = 'a'; i <= 'z'; i++)
              putchar(i);
          putchar('\n');

          for(i = 'A'; i <= 'Z'; i++)
              putchar(i);
           putchar('\n');

//prints base 10 numbers
         int a = '0';
         for (i = 0; i <= 10; i++)
         {
                 putchar(a);
                  a++;
         }
         putchar('\n');

         for (i = 0; i < 10; i++)
             putchar('0'+i);
         a = '0';
         for (i = 1; i < 6; i++)
         {
                putchar(i+'a');
                a++;
         }
         putchar('\n');


//prints the lowease charater in reverse
         for (i = 'z'; i >= 'a'; i--)
             putchar(i);
             putchar('\n');

//porgram prints the alphabets in lower case.
        for (i = 'a'; i <= 'z'; i++)
            putchar(i);
        putchar('\n');


//program prints random number with the last digit.
        int last;
        srand(time(0));
        int n = rand() - RAND_MAX/4;
        last = n % 10;

        if (n > 0)
           printf("%d: last num is %d\n", n, last);
        else if (n == 0)
           printf("%d last num is %d\n", n, last);
        else
            printf("%d last num is %d\n", n, last);

        return (0);

}