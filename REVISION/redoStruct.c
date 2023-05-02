#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
        char *name;
        char *reg;
        char *dept;
        int age;
        double gp;
}student_s;

student_s *student(char *name, char *reg, char *dept, char *age, double gp)
{
       student_s *student;
       student = malloc(sizeof(student_s));
       if(student == NULL)
              return (NULL);
        student->name = name;
        student->reg = reg;
        student->age = age;
        student->gp = gp;
        student->dept = dept;

        return student;
}

int main(void)
{
       student_s *student1 = student("Obi", "2005/240189", "History", 57, 2.5);
       if (student == NULL)
          return (-1);
       printf("       %s\n", student1->name);
       printf("       %f\n", student1->gp);
       printf("       %s\n", student1->dept);

       struct Student student2 = {"Chibundu ", "2017/241390", "Computer Science", 32, 3.6};
       printf("%s  %f\n", student2.name, student2.gp);
       printf("%s\n", student2.reg);
       printf("%d\n", student2.age);

       struct Student student3 = {"Onyinye", "2016/292932", "Ziology", 25, 3.7};
       struct Student *ptr;
       ptr = &student3;
       printf("%s  %d\n", ptr->name, ptr->age);
       printf("%s\n", ptr->dept);

       return (0);
}