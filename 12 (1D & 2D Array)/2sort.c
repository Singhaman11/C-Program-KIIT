//WAP to sort the array in an ascending order.
#include<stdio.h>
void main()
{
    int a[10], t = 0;
    printf("Enter 10 values \n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for(int j = 0; j < 10; j++)
    {
        for(int k = 0; k < (9-j); k++)
        {
            if(a[k] > a[k + 1])
            {
                t = a[k];
                a[k] = a[k+1];
                a[k+1] = t;
            }
        }
    }
    printf("Array arranged in an ascending order \n");
    for(int k = 0; k < 10; k++)
        printf("%d, ", a[k]);
}