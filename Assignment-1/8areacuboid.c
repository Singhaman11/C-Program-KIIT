//WAP to find the surface area of a cuboid where length, breadth and height are given.
#include<stdio.h>
void main()
{
    float l, b, h, a;
    printf("Enter the length, breadth & height of the cuboid \n");
    scanf("%f %f %f", &l, &b, &h);
    a = 2 * ((l * b) + (b * h) + (h * l));
    printf("Area of cuboid = %f ", a);
}