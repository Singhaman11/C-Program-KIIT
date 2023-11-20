//WAP to swap two numbers.
#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Swapped values \na = %d  b = %d", a, b);
}