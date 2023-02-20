#include <stdio.h>
#include <math.h>

int main(void)
{
        /*
        Data modifieirs
        format specifiers

        signed
        unsiged
        short
        long

        sin()
        cos()
        tan()
        pow()
        sqrt()


        int x;
        printf("Enter a character %c\n Enter 'q' to exit \n", x);

        for(x = ' '; x != 'q'? 1 : 0;)
        {
                x = getchar();
                putchar(x);
        }
        printf("\nOut of the loop");


                printf("The size of short is: %d.\n",
                sizeof(short));
                printf("The size of int is: %d.\n",
                sizeof(int));
                printf("The size of long is: %d.\n",
                sizeof(long));
                printf("The size of float is: %d.\n",
                sizeof(float));
                printf("The size of double is: %d.\n",
                sizeof(double));
                printf("The size of long double is: %d.\n",
                sizeof(long double));


     double x;

     x = 60.0;
     x *= 3.14159 / 180;

     printf("The sine of x is: %.4f\n", sin(x));
     printf("the cosine of x is: %.4f\n", cos(x));
     printf("The tangent of x is: %.4f\n", tan(x));
     printf("The value of x is: %.4f\n", x);

                 double x;
                 x = (double)0x19A1;

                 printf("%f\n", x);
                 printf("%f\n", sqrt(x));

     int x;
     for (x = -5; x <= 9; x++)
     {
             if(x > 0)
                  if(x % 2 == 0)
                       printf("%4d is an even number\n", x);
                  else
                      printf("%4d is an odd number\n", x);
             else if (x == 0)
                  printf("The number is a zero\n", x);
             else
                  printf("The num is a negative number %4d\n", x);
     }

     int a;
     char *b;
     float c;

     printf("a: has address %u and content %d\n", &a, a);
     printf("b: has address %p and content %c\n", &b, b);
     printf("c: has address %p and content %5.2f\n", &c, c);

      a = 10;
      *b = 'a';
      c = 10.05;

     printf("a: has address %p and content %d\n", &a, a);
     printf("b: has address %p and content %c\n", &b, b);
     printf("c: has address %p and content %5.2f\n", &c, c);
*/
                char c, *ptr_c;
                int x, *ptr_x;
                float y, *ptr_y;

                c = 'A';
                x = 34;
                y = 15.09;

                printf("c: The address of c is %p, the content is %c\n", &c, c);
                printf("x: The address of x is %p, the content is %d\n", &x, x);
                printf("y: The address of y is %p, the content is %5.2f\n", &y, y);

                ptr_c = &c;
                ptr_x = &x;
                ptr_y = &y;

                printf("ptr_c: The address of ptr_c is %p, the content is %p\n", &ptr_c, ptr_c);
                printf("*ptr_c: Address = %p, content is %c\n", &*ptr_c, *ptr_c);

                printf("ptr_x: The address of ptr_x is %p, the content is %p\n", &ptr_x, ptr_x);
                printf("*ptr_x: Address = %p, content is %d\n", &*ptr_x, *ptr_x);

                printf("ptr_y: The address of ptr_y is %p, the content is %p\n", &ptr_y, ptr_y);
                printf("*ptr_y: Address = %p, content is %4.2f\n", &*ptr_y, *ptr_y);


























        return 0;
}