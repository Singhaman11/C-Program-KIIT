/*WAP to accept a number and check whether it is a 'Spy Number' or not. (A number is spy if the sum of its digits equals the product of its digits.)
Example: Sample Input: 1124
         Sum of the digits = 1 + 1 + 2 + 4 = 8
         Product of the digits = 1 * 1 * 2 * 4 = 8
*/
#include<stdio.h>
void main()
{
    int n, s = 0, p = 1;
    printf("Enter an integer \n");
    scanf("%d", &n);
    while(n > 0)
    {
        s = s + (n % 10);
        p = p * (n % 10);
        n = n / 10;
    }
    if(s == p)
        printf("Integer is a Spy no. \n");
    else
        printf("Integer is not a Spy no.\n");
}