//WAP to find out the area of rectangle whose l & b are given.
#include<stdio.h>
void main()
{
    float l, b, a;
    printf("Enter the length & breadth of a rectangle \n");
    scanf("%f %f", &l, &b);
    a = l * b;
    printf("Area of a rectangle = %f", a);
}