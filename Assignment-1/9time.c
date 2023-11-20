//WAP to input time in second and calculate how many hours, minutes and seconds.
#include<stdio.h>
void main()
{
    int s, h, m;
    printf("Enter time in seconds \n");
    scanf("%d", &s);
    h = s / 3600;
    s = s % 3600;
    m = s / 60;
    s = s % 60;
    printf("Hrs\tMins\tSec\n%d\t%d\t%d", h, m, s);
}