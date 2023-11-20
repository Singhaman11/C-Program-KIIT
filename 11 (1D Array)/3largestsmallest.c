// WAP to store 20 numbers in a 1D Array. Display the largest and smallest value from the array.
#include<stdio.h>
void main()
{
    int a[20], l = 0, s;
    printf("Enter 20 values \n");
    for(int i = 0; i < 20; i++)
        scanf("%d", &a[i]);
    for(int j = 0; j < 20; j++)
    {
        if(l < a[j])
            l = a[j];
    }
    s = a[0];
    for(int k = 0; k < 20; k++)
    {
        if(s > a[k])
            s = a[k]; 
    }
    printf("Largest value from the array = %d \n", l);
    printf("Smallest value from the array = %d \n", s);
}