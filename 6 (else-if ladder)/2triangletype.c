//WAP to enter three sides of a triangle and check whether it is an Equilateral, an Isosceles or a Scalene Triangle.
#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three sides of a triangle \n");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b  && b == c)
        printf("The triangle is an Equilateral triangle");
    else if(a == b || b == c || a == c)
        printf("The triangle is an Isosceles triangle");
    else
        printf("The triangle is a Scalene triangle");
}