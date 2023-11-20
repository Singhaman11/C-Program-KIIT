/*WAP to enter any 15 numbers and check whether they are divisible by 5 or not. If divisible then perform the following tasks:
(a) Display all the numbers ending with the digit 5.
(b) Count those numbers ending with 0(zero).           */
#include<stdio.h>
void main()
{
    int n, c = 0;
    printf("Enter 15 nos. \n");
    for(int i = 1; i <= 15; i++)
    {
        scanf("%d", &n);
        if(n % 10 == 5)
            printf("%d ", n);
        else if(n % 10 == 0)
            c++;
    }
    printf("Count of no. ending with 0 = %d", c);
}