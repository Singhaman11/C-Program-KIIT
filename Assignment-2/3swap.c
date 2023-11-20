//WAP to swap two numbers without using third variable and using bit-wise operator.
#include<stdio.h>
void main()
{
    int a, b;
    printf("Entet two numbers\n");
    scanf("%d %d", &a, &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Swapped values \na = %d  b = %d", a, b);
}