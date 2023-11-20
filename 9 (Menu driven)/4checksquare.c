//WAP to display all the numbers between m and n input from the keyboard (where m<n, m>0, n>0), check and print the numbers that are perfect square. e.g. 25, 36, 49, are said to be perfect square numbers.
#include<stdio.h>
#include<math.h>
void main()
{
    int m, n, i;
    float r;
    printf("Enter the range \n");
    scanf("%d %d", &m, &n);
    if(m < n && m > 0 && n > 0)
    {
        for(i = m; i <= n; i++)
        {
            r = sqrt(i);
            if(r == (int)r)
                printf("%d ", i);
        }
        printf("are Perfect square");
    }
    else
        printf("Entered value of m is greater than n");
}