//WAP to input two rational numbers and find out the sum.
#include<stdio.h>
void main()
{
    int N1, D1, N2, D2, N3, D3;
    printf("Enter the first rational number(Numerator & Denominator) \n");
    scanf("%d %d", &N1, &D1);
    printf("Enter the second rational number(Numerator & Denominator) \n");
    scanf("%d %d", &N2, &D2);
    N3 = (N1 * D2) + (N2 * D1);
    D3 = D1 * D2;
    printf("The sum of rational numbers is %d/%d", N3, D3);
}