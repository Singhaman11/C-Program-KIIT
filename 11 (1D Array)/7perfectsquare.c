//WAP to store 20 numbers in a 1D Array. Now, display only those numbers that are perfect squares.
#include<stdio.h>
#include<math.h>
void main()
{
    int a[20];
    float sr = 0;
    printf("Enter 20 values \n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for(int j = 0; j < 10; j++)
    {
        sr = sqrt(a[j]);
        if((int)sr == sr)
            printf("%d \t", a[j]);
    }
}