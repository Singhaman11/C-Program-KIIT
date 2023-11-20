//WAP to store 20 numbers in a 1D Array. Display the numbers which are prime.
#include<stdio.h>
void main()
{
    int a[20], c = 0;
    printf("Enter 20 values \n");
    for(int i = 0; i < 20; i++)
        scanf("%d", &a[i]);
    for(int j = 0; j < 20; j++)
    {
        for(int k = 1; k <= a[j]; k++)
        {
            if(a[j] % k == 0)
                c++;
        }
        if(c == 2)
            printf("%d, ", a[j]);   
        c = 0;
    }
}