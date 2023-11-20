//WAP to find simple interest where principle, rate of interest & time are given.
#include<stdio.h>
void main()
{
    float p, r, t, SI;
    printf("Enter principle, rate of interest & time \n");
    scanf("%f %f %f", &p, &r, &t);
    SI = (p * r * t) / 100;
    printf("Simple interest (S.I.) = %f", SI);
}