//WAP to find out the area of triangle whose b & h are given.
#include<stdio.h>
void main()
{
    float b, h, a;
    printf("Enter base and height of a triangle \n");
    scanf("%f %f", &b, &h);
    a = 0.5 * b * h;
    printf("Area of a triangle = %f", a);
}