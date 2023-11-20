// WAP to take 20 integers no. in an array. then find the sum of all of those indexes of the array were prime no. is present.
#include<stdio.h>
int prime(int);
void main()
{
    int n[20], s = 0;
    printf("Enter 20 integers \n");
    for(int i = 0; i < 20; i++)
        scanf("%d", &n[i]); 
    for(int j = 0; j < 20; j++)
    {
        if(prime(n[j]) == 2)    
            s = s + j;
    }
    printf("Sum of all of those indexes of the array were prime no. is present = %d", s);
}
int prime(int a)
{
    int c = 0;
    for(int i = 1; i <= a; i++)
    {
        if(a % i == 0)
            c++;
    }
    return c;
}