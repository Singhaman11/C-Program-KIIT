//WAP to find largest value between two numbers using function.
#include<stdio.h>
int largest(int a, int b);
void main()
{
    int x, y, z;
    printf("Enter two values \n");
    scanf("%d %d", &x, &y);
    z = largest(x, y);
    printf("Largest no. = %d", z);
}
int largest(int a, int b)
{
    int c;
    c = (a > b) ? a : b;
    return c;
}