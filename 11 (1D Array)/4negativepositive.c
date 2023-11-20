// WAP to store 10 numbers (including positive and negative numbers) in a 1D Array. Display all the negative numbers followed by the positive numbers without changing the order of the numbers.
#include<stdio.h>
void main()
{
    int a[10];
    printf("Enter 10 values \n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for(int j = 0; j < 10; j++)
    {
        if(a[j] < 0)
            printf("%d, ", a[j]);
    }
    for(int k = 0; k < 10; k++)
    {
        if(a[k] >= 0)
            printf("%d, ",a[k]);
    }    
}