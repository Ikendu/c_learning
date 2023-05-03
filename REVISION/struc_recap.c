#include <stdio.h>
#include <stdlib.h>

//self refrential structure
struct Assign
{
        int n;
        char *name;
        struct Assign *ptr;
};

//structure valiable as an argument
struct Value
{
       int m;
       int n;
};
int add(struct Value a)
{
        printf("%d\n", a.m + a.n);
}
//passing pointer as arguments to structures
int addptr(struct Value *a)
{
        printf("%d\n", a->m + a->n);
}
//returning structure variable from function
struct Value edit(struct Value p)
{
       p.m++;
       p.n += 5;

        return p;
}
//the main function
int main(void)
{
        //self refrential structure
        struct Assign student1 = {10, "Aniede Chibundu", NULL};
        struct Assign student2 = { 12, "Akuoma Excel", NULL};

        student1.ptr = &student2;

        printf("%s\n", student1.name);
        printf("%s\n", student1.ptr->name);
        printf("%d\n", student1.ptr->n);

        //structure valiable as an argument
        struct Value s1 = {20, 40};
        struct Value s2 = {22, 33};
        add(s1);
        add(s2);

        //passing pointers as arguments to pointers
        addptr(&s1);
        addptr(&s2);

        //returning structure variable from function
        s1 = edit(s1);
        s2 = edit(s2);
        add(s1);
        add(s2);


       return 0;
}