//WAP to find the no. of occurrence of an integer in the array.


#include<stdio.h>
void main()
{
    int a[10], n, t = 0; 
    printf("Enter 10 values \n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("Enter a no. to check it's occurence \n");
    scanf("%d", &n);
    for(int j = 0; j < 10; j++)
    {
        if(a[j] == n)
        {
            printf("%d is present at %d \n", n, (j + 1));
            t++;
        }
    } 
    if(t == 0)
        printf("%d is not present \n", n);
}