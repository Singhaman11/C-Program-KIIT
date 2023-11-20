/*WAP to store 20 temperatures in °F in a 1D Array and display all the temperatures after converting them into °C.
Hint: (C/5) = (F - 32) / 9         */
#include<stdio.h>
void main()
{
    float a[20], C;
    printf("Enter 20 values \n");
    for(int i = 0; i < 20; i++)
        scanf("%f", &a[i]);
    printf("Temp. in C = ");
    for(int j = 0; j < 20; j++)
    {
        C = (5.0 / 9.0) * (a[j] - 32.0);
        printf("%.2f, ", C);
    }
}