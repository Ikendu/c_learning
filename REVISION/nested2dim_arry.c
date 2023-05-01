#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int i, j;
        int arry[4][5] = {

                {3, 5, 2, 10, 40},
                {7, 12, 14, 20, 3},
                {67, 2, 4, 5, 10},
                {9, 12, 17, 3, 23},
        };

        for (i = 0; i < 4; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        printf(" %d,", arry[i][j]);
                }
                printf("\n");
        }
        i = 8, j = 10;
        //getting memmory addresses
        printf("i = %p\nj = %d\narry = %p\n", &i, *&j, &arry);

        FILE *fptr = fopen("employee.txt", "w");
}