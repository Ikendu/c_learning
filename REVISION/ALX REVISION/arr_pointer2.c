#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//returns a character if found
char findchar(char str[], char c)
{
        int i;

        for (i = 0; str[i] != '\0'; i++)
        {
                if (str[i] == c)
                {
                        printf("%c is found at %d\n", str[i], i+1);
                        return(str[i]);
                }
        }
        printf("The character is not found\n");
}

//founds and print the number of found characters...not ok yet
char *findall(char *str, char *find)
{
        int i, j;
        unsigned int sum = 0;

        for (i = 0; str[i] != '\0'; i++)
        {
                for (j = 0; find[j] != '\0'; j++)
                {
                        if (str[i] == find[j])
                        {
                                return(str + i);

                        }
                }
        }

       return(0);
}
//MAIN FUNCTION::::::
int main(void)
{
        char arr[] = "how good are you";
        findchar(arr, 'd');

        char get[] = "g";
        char *getter = findall(arr, get);
        printf("%s\n", getter);
}
