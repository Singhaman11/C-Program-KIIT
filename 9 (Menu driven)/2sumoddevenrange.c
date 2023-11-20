//WAP to calculate the sum of all odd numbers and even numbers between a range of numbers from m to n (both inclusive) where m < n. Input m and n (where m<n).
#include<stdio.h>
void main()
{
    int m, n, so = 0, se = 0, i;
    printf("Enter the range \n");
    scanf("%d %d", &m, &n);
    if(m < n)
    {
        for(i = m; i <= n; i++)
        {
            if(i % 2 == 0)
                se = se + i;
            else 
                so = so + i;
        }
        printf("Sum of odd nos. = %d \n", so);
        printf("Sum of even nos. = %d", se);
    }
    else
        printf("Entered value of m is greater than n");
}