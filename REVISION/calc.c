#include <stdio.h>

double calc()
{
        double num1, num2;
        char op;
        char get;

        while (1)
        {
              printf("Enter a character to continue or q to exit\n");
              scanf(" %c", &get);
                if (get == 'q')
                {
                        printf("Exiting calc... ");
                        return(0);
                }
                else
                {
                        printf("Enter two numbers\n");
                        scanf("%lf%lf", &num1, &num2);
                        printf("Enter an operator\n");
                        scanf(" %c", &op);

                        if (op == '+')
                            printf("The sum is: %f\n", num1 + num2);
                        else if (op == '-')
                             printf("The sub is: %f\n", num1 - num2);
                        else if (op == '*')
                             printf("The mult is: %f\n", num1 * num2);
                        else if (op == '/')
                             printf("The division is: %f\n", num1 / num2);
                        else
                             printf("Invalid operator \n");
                }

        }

}

int main(void)
{
        calc();
        return (0);
}