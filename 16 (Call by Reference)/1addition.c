//WAP to find addition of two numbers using function.
#include<stdio.h>
int add(int *, int *);
void main()
{
    int x, y, z;
    printf("Enter two values \n");
    scanf("%d %d", &x, &y);
    z = add(&x, &y);
    printf("Result = %d", z);
}
int add(int *a, int *b)
{
    int c;
    c = *a + *b;
    return c;
}