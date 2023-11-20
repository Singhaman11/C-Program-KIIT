/*WAP to input any 15 numbers (including positive and negative).
Perform the following tasks:
(a) Count the positive numbers
(b) Count the negative numbers
(c) Sum of positive numbers
(d) Sum of negative numbers                 */
#include<stdio.h>
void main()
{
    int n, i, cp, cn = 0, sp = 0, sn = 0;
    printf("Enter 15 nos. \n");
    for(i = 1; i <= 15; i++)
    {
        scanf("%d", &n);
        if(n >= 0)
        {
            cp++;
            sp = sp + n;
        }
        else if(n < 0)
        {
            cn++;
            sn = sn + n;
        }
    }
    printf("Count the positive nos. = %d\n Count the negative nos. = %d\n Sum of positive nos. = %d\n Sum of negative nos. = %d", cp, cn, sp, sn);
}