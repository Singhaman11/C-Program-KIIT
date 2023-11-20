//WAP to find area and circumference of a circle where radius is given.
#include<stdio.h>
void main()
{
    float r, a, c;
    printf("Enter the radius of a circle \n");
    scanf("%f", &r);
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("Area of a circle = %f \n", a);
    printf("Circumference of a circle = %f", c);
}