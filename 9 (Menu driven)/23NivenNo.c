/*WAP to input a number. Check and display whether it is a Niven number or not. (A number is said to be Niven which is divisible by the sum of its digits).
Example: Sample Input: 126
         Sum of its digits = 1 + 2 + 6 = 9 and 126 is divisible by 9.
*/
#include<stdio.h>
void main()    
{
    int n, s = 0;
    printf("Enter an integer \n");
    scanf("%d", &n);
    int n1 = n;
    while(n > 0)
    {
        s = s + (n % 10);
        n = n / 10;
    }
    if((n1 % s) == 0)
        printf("Integer is a Niven no. \n");
    else
        printf("Integer is not a Niven no.\n");
}