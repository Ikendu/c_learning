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
        printf("# ");
        for (i = 0; i < n; i++)
        {
                putchar('#');
                for(j = 0; j < n*2; j++)
                {
                        putchar(' ');

                }
                if(i != 0)
                putchar('#');
                //putchar('#');
                putchar('\n');
        }

        for(j = 0; j <= n; j++)
           printf("# ");
           putchar('\n');
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

       psqure(30);

       //print_square(10);

        return (0);
}
