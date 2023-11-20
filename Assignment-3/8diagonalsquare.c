//WAP to accept the diagonal of a square. Find and display the area and perimeter of the square.
#include<stdio.h>
void main()
{
    float d, s;
    printf("Enter the diagonal of square \n");
    scanf("%f", &d);
    s = d / 1.414;
    printf("Area of square = %f \n", (s * s));
    printf("Perimeter of square = %f \n", (4 * s));
}