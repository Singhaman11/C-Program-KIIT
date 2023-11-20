//WAP to find the volume of a cube where one side is given.
#include<stdio.h>
void main()
{
    float s, v;
    printf("Enter the side of a cube \n");
    scanf("%f", &s);
    v = s * s * s;
    printf("Volume of a cube = %f", v);
}