//WAP to reverse the array.
#include<stdio.h>
void main()
{
    int arr[5], t;
    printf("Enter 5 values \n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for(int j = 0; j < (5/2); j++)
    {
        t = arr[j];
        arr[j] = arr[5-j-1];
        arr[5-j-1] = t;
    }
    for(int k = 0; k < 5; k++)
        printf("%d \t", arr[k]);
}