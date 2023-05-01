#include <stdio.h>
#include <string.h>

struct Student
{
        char name[50];
        char reg[15];
        char dept[20];
        int age;
        double gp;
};

int main(void)
{
       struct Student student1;

       student1.age = 20;
       student1.gp = 3.6;
       strcpy(student1.name, "Aniede");

       printf("%s\n", student1.name);
       printf("%f\n", student1.gp);
}