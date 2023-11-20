//WAP to accept temp. in celsius and change into fahrenheit
#include<stdio.h>
void main()
{
    float C, F;
    printf("Enter temp. in Celsius \n");
    scanf("%f", &C);
    F = ((9 * C) / 5) + 32;
    printf("Temperature (in F) = %f \n", F);
    return 0;
}