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
//check if its lower of upper
int _islower(char c)
{
        if (c >= 'a' && c <= 'z')
                printf("its lower\n");
        else if (c >= 'A' && c <= 'Z')
                printf("its UPPER\n");
        else
                printf("its not an alphabet\n");
}

//prints the acbolute value
int _abs(char n)
{
        if (n < 0)
            return(-1 * n);
        else
            return (n);
 }

//print the last digit
int lastdigit(int n)
{
        int x = abs(n%10);
        return (x);

}

//prints every minuts of the day
int everyminute()
{
        for (i = 0; i < 24; i++)
        {
                for (j = 0; j < 60; j++)
                {
                        _putchar((i/10)+'0');
                        _putchar((i%10)+'0');
                        _putchar(':');
                        _putchar((j/10)+'0');
                        _putchar((j%10)+'0');
                        _putchar(' ');

                }
        }
        _putchar('\n');
}

//print the 9 X times table
int times9()
{
        for (i = 0; i <= 9; i++)
        {
                 for(j = 0; j <= 9; j++)
                 {
                         int prod = i * j;
                         if (j == 0)
                             putchar('0');
                         else if (prod <= 9)
                         printf(",  %d", prod);
                         else
                         printf(", %d%d", prod/10, prod%10);
                 }
                 putchar('\n');
        }
        putchar('\n');
}


void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int prod = j * i;

			if (j == 0)
			{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

//print all natural numbers from given number to 89;
int printnum(int n)
{
        if(n >= 89)
        {
                for (i = n; i >= 89; i--)
                {
                        printf("%d", i);
                        if(i != 89)
                             printf(", ");
                }
                printf("\n");
        }else
        {
                for (i = n; i <= 89; i++)
                {
                        printf("%d");
                        if(i != 89)
                             printf(", ");
                }
                printf("\n");
        }
}

//prints the sum of all the multiples of 3 and 5
int printmult()
{
        int sum = 0;
        int sum2 = 0;
        for (i = 0; i < 1024; i++)
        {
                if (i%3 == 0)
                {
                        sum += i;
                }
                if (i%5 == 0)
                {
                        sum2 += i;
                }
        }
        printf("%d\n ", sum);
        printf("%d\n", sum2);
}

//evaluation of fibonoccai sequence
int fibo()
{
        long int i = 1;
        long int j = 2;
        long int k = i + j;
        int count;
        printf("%ld, %ld, ", i, j);
        for (count = 0; count <= 50; count++)
        {
                printf("%ld", k);
                i = j;
                j = k;
                k = i + j;
                if( count < 50 )
                    printf(", ");
        }
        printf("\n");
}
//even valued fibonacci sumation
int fibo2()
{
        int long a = 1;
        int long b = 2;
        int long c = a + b;
        int sum = 0;

        while (c < 400000)
        {

                if (c%2==0)
                {
                        sum += c;
                }
                a = b;
                b = c;
                c = a + b;
        }
        printf("\n%d\n", sum);
}
//print the numbers 0 to 14 into 10
void tenmult()
{
        for (i = 0; i < 10; i++)
        {
                for (j = 0; j <= 14; j++)
                {
                        if (j > 9)
                        {
                                putchar((j/10) + '0');

                        }
                        putchar(j%10 + '0');
                        putchar(' ');
                }
                printf("\n");
        }
}
void printline(int n)
{
        for (i = 1; i <= n; i++)
        putchar('_');
        putchar('\n');
}
void printdiagonal(int n)
{
        if (n <= 0)
           putchar('\n');
        else
        {
                for (i = 0; i < n; i++)
                {
                        for(j = 0; j < i; j++)
                        {
                                putchar(' ');
                        }
                        _putchar('\\');
                        _putchar('\n');
                }

        }
}

//print a squre shape

void psqure(int n)
{
        for (i = 0; i < n; i++)
        printf("# ");                   //prints the first line
        for (i = 0; i < n; i++)
        {
                putchar('#');           //prints the left vertical line
                for(j = 0; j < n*2; j++)
                {
                        putchar(' ');   //creates inside space

                }
                if(i != 0)              //removes the first stray #
                putchar('#');           //prints the right vertical line
                putchar('\n');
        }
        for(j = 0; j <= n; j++)
           printf("# ");                //prints the ground horizontal line
           putchar('\n');
}

//program that prints with certain details
void print100()
{
        for (i = 1; i <= 100; i++)
        {
                if (i%5 == 0 && i%3 == 0)
                {
                        printf("BuzzFizz");
                        printf(" ");
                        continue;
                }
                if (i%3 == 0)
                   {
                           printf("Fizz");
                           printf(" ");
                           continue;
                   }
                if (i%5 == 0)
                {
                        printf("Buzz");
                        printf(" ");
                        continue;
                }



                printf("%d ", i);

        }
        printf("\n");
}

//copied version of above
int printn(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		} else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

//print a triangle
int k;
void triangle(int n)
{
        for (i = 0; i <= n; i++)
        {
                for (j = n-i; j > 0; j--)
                    printf(" ");
                for (k = 0; k <= i; k++)
                    printf("# ");
                printf("\n");
        }
}

//print prime factor
void primefact(void)
{
        unsigned int n = 2;
        unsigned long num = 612852475143;

        while (n != num)
        {
                if (num % n == 0)
                {
                        num = num/n;

                }else
                {
                        n++;

                }
        }
        printf("%lu\n", num);
}
//MAIN FUNCTION
int main(void)
{
        _putchar('c');
        _putchar('\n');

        print_alphabet_x10();

        _islower('H');

        int n = _abs(-45);
        printf("%d\n", n);

        int a = lastdigit(-3036);
        printf("%d\n", a);

       // everyminute();

        times9();

       // times_table();

       // printnum(59);

        //printmult();

        fibo();

        fibo2();

        //tenmult();

       // printline(10);
       printdiagonal(10);

       psqure(10);

       print100();

       //printn();

       //print_square(10);
       triangle(10);

       primefact();

        return (0);
}
