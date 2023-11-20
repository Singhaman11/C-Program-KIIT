//WAP to display all the 'Buzz Numbers' between p and q (where p<q). A 'Buzz Number' is the number which ends with 7 or is divisible by 7.
#include<stdio.h>
void main()
{
    int p, q, i;
    printf("Enter the range \n");
    scanf("%d %d", &p, &q);
    if(p < q && p > 0 && q > 0)
    {
        printf("Buzz no. \n");
        for(i = p; i <= q; i++)
        {
            if((i % 10 == 7) || (i % 7 == 0))
                printf("%d ", i);
        }
    }
    else
        printf("Entered value of p is greater than q");
}