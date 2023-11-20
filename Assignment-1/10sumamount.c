//WAP to input two amount (in rupees and paise). Find out the sum of the two amount.
#include<stdio.h>
void main()
{
    int R1, P1, R2, P2, R3, P3;
    printf("Enter first amount (in rupees and paise)\n");
    scanf("%d %d", &R1, &P1);
    printf("Enter second amount (in rupees and paise)\n");
    scanf("%d %d", &R2, &P2);
    P3 = P1 + P2;
    R3 = R1 + R2 + (P3 / 100);
    P3 = P3 % 100;
    printf("Sum of two amount = %d Rupees  %d Paise", R3, P3);
}