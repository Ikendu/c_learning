#include <stdio.h>

char grade()
{
        char check, grade;
        char name[30];


        while(1)
        {
                printf("Enter a character to continue or a q to exit\n");
                scanf(" %c", &check);
                if (check == 'q')
                {
                        printf("Exiting the Grading Program \n");
                        return (0);
                }
                else
                {
                        printf("Enter your Surname:\n");
                        scanf("%s", &name);
                        printf("Enter ur current grade in uppercase \n");
                        scanf(" %c", &grade);

                        switch(grade)
                        {
                                case 'A': printf("%s you did excellently\n", name);
                                break;
                                case 'B': printf("%s you did very well\n", name);
                                break;
                                case 'C': printf("%s you got average score\n", name);
                                break;
                                case 'D': printf("%s you got below average\n", name);
                                break;
                                case 'F': printf("%s you failed the test\n", name);
                                break;
                                default:
                                       printf("You entered an invalid grade\n");
                        }

                }
        }
}
int main(void)
{
        grade();

        return (0);
}
