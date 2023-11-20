//WAP to accept the number of days and display it after converting into number of years, months and days.
#include<stdio.h>
void main()
{
    int d, m, y;
    printf("Enter number of days \n");
    scanf("%d", &d);
    y = d / 365;
    d = d % 365;
    m = d / 30;
    d = d % 30;
    printf("Years\tMonths\tDays\n%d\t%d\t%d", y, m, d);
}