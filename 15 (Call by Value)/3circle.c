//WAP to find diameter, circumference and area of circle using functions.
#include<stdio.h>
float diameter(float a);
float circumference(float a);
float area(float a);
void main()
{
    float r, d, c, ar;
    printf("Enter radius \n");
    scanf("%f", &r);
    d = diameter(r);
    c = circumference(r);
    ar = area(r);
    printf("Diameter of circle = %.2f \n", d);
    printf("Circumference of circle = %.2f \n", c);
    printf("Area of circle = %.2f \n", ar);
}
float diameter(float a)
{
    float d;
    d = 2 * a;
    return d;
}
float circumference(float a)
{
    float c;
    c = 2 * 3.14 * a;
    return c;
}
float area(float a)
{
    float ar;
    ar = 3.14 * a * a;
    return ar;
}