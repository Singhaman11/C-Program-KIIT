/*WAP to find and display the percentage difference, when:
a)	A number is updated from 80 to 90
b)	A number is updated from 7.5 to 7.2*/
#include<stdio.h>
void main()
{
    float pd;
    pd = -((80.0 - 90.0) / 80.0) * 100.0;
    printf("Percentage difference of 80 to 90 = %f \n", pd);
    pd = ((7.5 - 7.2) / 7.5) * 100;
    printf("Percentage difference of 7.5 to 7.2 = %f \n", pd);
}