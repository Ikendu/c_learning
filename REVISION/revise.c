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

//prints base 16 numbers with putchar
         for (i = 0; i < 10; i++)
             putchar('0'+i);
         a = '0';
         for (i = 1; i < 6; i++)
         {
                putchar(i+'a');
                a++;
         }
         putchar('\n');

//prints all posible combinations of single digits
         for (i = 1; i < 10; i++)
         {
                 putchar((i) + '0');
                 if (i != 9)
                 {
                         putchar(',');
                         putchar(' ');
                 }
         }
         putchar('\n');
//prints 00 to 99 using putchar
         int j;
         for(i = 10; i < 20; i++)
         {
               for (j = 10; j < 20; j++)
               {
                       putchar((i % 10) + '0');
                       putchar((j % 10) + '0');
                       if (i != 19 && j != 19)
                       putchar(',');
                       putchar(' ');
               }
         }
         putchar('\n');

         for(i = 10; i < 20; i++)
         {
                 for (j = 10; j < 20; j++)
                 {
                         if ((j%10) > (i%10))
                         {
                            putchar((i % 10) + '0');
                            putchar((j % 10) + '0');
                            if(i != 19 && j != 19)
                            {
                                    putchar(',');
                            putchar(' ');
                            }
                         }


               }
               putchar('\n');
         }

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

        for (i = 10; i < 20; i++)
        {
                for (j = 10; j < 20; j++)
                {
                        for (a = 10; a < 20; a++)
                        {
                                if ((i%10) < (j%10) && (j%10) < (j%10))
                                {
                                        putchar((i&10) + '0');
                                        putchar((j&10) + '0');
                                        putchar((a&10) + '0');
                                        if(i != 19 && j != 19 && a != 19)
                                        {
                                                putchar(',');
                                                putchar(' ');

                                        }
                                }
                        }
                }
        }

}