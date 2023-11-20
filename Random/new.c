/*Write a program to find and display the percentage difference, when:
a) A number is updated from 80 to 90
b) A number is updated from 7.5 to 7.2 aa bhi*/
#include<stdio.h>
#include<math.h>
void main()
{
    float avg=0, pd=0;
    avg = (80 + 90) / 2.0;
    pd = (fabs(80 - 90) / avg) * 100;
    printf("Percentage difference of no. updated from 80 to 90 = %.2f\n", pd); 
    avg=0, pd=0;
    avg = (7.5 + 7.2) / 2.0;
    pd = ((7.5 - 7.2) / avg) * 100;
    printf("Percentage difference of no. updated from 7.5 to 7.2 = %.2f\n", pd); 
}