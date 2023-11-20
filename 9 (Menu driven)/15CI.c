/*WAP to input Principal (p), Rate (r) and Time (t). Calculate and display the amount, which is compounded annually for each year by using the formula:
Cpmpound Interest for each year (si) = (p*r*1) / 100
                                 p = p + si
[Hint: The amount after each year is the Principal for the next year.]           */
#include<stdio.h>
void main()
{
    float p, r = 0, t = 0, si = 0;
    printf("Enter Principal (p), Rate (r) and Time (t) \n");
    scanf("%f %f %f", &p, &r, &t);
    for(int i = 1; i <= t; i++)
    {
        si = (p * r * 1) / 100;
        p = p + si;
        printf("Amount at the end of %d year = Rs. %.2f \n", i, p);
    }
}