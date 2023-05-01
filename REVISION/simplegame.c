#include <stdio.h>

int main(void)
{
        int checker = 5;
        int check;
        int counter = 0;
        int limit = 0;
        //int ender = 4;

        while (check != checker && limit == 0)
        {
                if(counter < 4)
                {
                        printf("Enter a number to win\n");
                        scanf("%d", &check);
                        counter++;
                }
                else
                    limit = 1;

        }

        if (limit == 1)
           printf("You lose\n");
        else
        printf("You win\n");
}