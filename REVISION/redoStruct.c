#include <stdio.h>
#include <string.h>

struct Student
{
        char *name;
        char *reg;
        char *dept;
        int age;
        double gp;
};

struct Student *student(char *name, char *reg, char *dept, char *age, int gp)
{
       struct Student *student;
       student = malloc(sizeof(struct Student));
       if(student == NULL)
              return (NULL);
        student->name = name;
        student->reg = reg;
        student->age = age;
        student->gp = gp;

        return student;
}

int main(void)
{
       struct Student student1;

       student1.age = 20;
       student1.gp = 3.6;
       student1.name = "Ikendu I of Africa The time is coming but starts now";
       //strcpy(student1.name, "Aniede");

       struct Student student2 = {"Chibundu ", "2017/241390", "Computer Science", 32, 3.6};
       printf("%s  %f\n", student2.name, student2.gp);
       printf("%s\n", student2.reg);
       printf("%d\n", student2.age);

       printf("%s\n", student1.name);
       printf("%f\n", student1.gp);

       struct Student student3 = {"Onyinye", "2016/292932", "Ziology", 25, 3.7};
       struct Student *ptr;
       ptr = &student3;
       printf("%s  %d\n", ptr->name, ptr->age);
       printf("%s\n", ptr->dept);
}