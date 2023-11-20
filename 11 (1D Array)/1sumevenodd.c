//WAP to store 20 numbers (even and odd numbers) in a 1D Array. Calculate and display the sum of all even numbers and all odd numbers separately.
#include<stdio.h>
void main()
{
    int a[20], se = 0, so = 0;
    printf("Enter 20 values \n");
    for(int i = 0; i < 20; i++)
        scanf("%d", &a[i]);
    for(int j = 0; j < 20; j++)
    {
        if(a[j] % 2 == 0)
            se = se + a[j];
        else
            so = so + a[j]; 
    }
    printf("Sum of even nos. = %d \n", se);
    printf("Sum of odd nos. = %d \n", so);
}