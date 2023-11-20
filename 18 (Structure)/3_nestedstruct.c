#include<stdio.h>
#include<string.h>
struct child
{
    int child_age;
    char child_name[];
};
struct parent
{
    int parent_AGE;
    char parent_NAME[40];
    struct child b;
};
void main()
{
    struct parent a;
    a.parent_AGE = 25;
    strcpy(a.parent_NAME, "Alex");
    a.b.child_age = 12;
    strcpy(a.b.child_name, "Ahaan");
    printf("Parent name: %s \n", a.parent_NAME);
    printf("Parent age: %d \n", a.parent_AGE);
    printf("Child name: %s \n", a.b.child_name);
    printf("Child age: %d \n", a.b.child_age);
}