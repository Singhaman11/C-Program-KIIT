/*A special two-digit number is such that when the sum of its digits is added to the product of its digits, the result is equal to the original two-digit number.
Example: Consider the number 59.
         Sum of digits = 5 + 9 = 14
         Product of digits = 5 * 9 = 45
         Sum of the sum of digits and product of digits = 14 + 45 = 59
WAP to accept a two-digit number. Add the sum of its digits to the product of its digits. If the value is equal to the number input, then display the message "Special 2 - digit number" otherwise, display the message "Not a special two-digit number".
*/
#include<stdio.h>
void main()
{
    int n, s = 0, p = 1, ssp = 0, n1;
    printf("Enter a two-digit no. \n");
    scanf("%d", &n);
    if((n > 9) && (n < 100))
    {
        n1 = n;
        while(n > 0)
        {
            s = s + (n % 10);
            p = p * (n % 10);
            n = n / 10;
        }
        ssp = s + p;
        if(ssp == n1)
            printf("Special two-digit number");
        else
            printf("Not a special two-digit number");
    }
    else
        printf("The integer is not a two-digit integer");
}