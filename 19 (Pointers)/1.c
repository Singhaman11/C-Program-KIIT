#include<stdio.h>
void main()
{
    int *ptr;
    int age = 22;
    ptr = &age;
    printf("Value age = %d\n", age);
    printf("Memory address of age = %p\n", ptr);
    printf("Value of age = %d\n", *ptr);
    printf("Memory address of age = %p\n", &age);
    printf("Value of age = %d\n", *&age);
}