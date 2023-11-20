/*WAP to input a number and display the new number after reversing the digits of the original number. The program also displays the absolute difference between the original number and the reversed number.
Sample Input: 194
Sample Output: 491
               Absolute Difference = 297            */
#include<stdio.h>
void main()
{
    int n, n1, r = 0, d = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    n1 = n;
    while(n != 0)
    {
        r = (r * 10) + (n % 10);
        n = n / 10;
    }
    d = (n1 > r) ? (n1 - r) : (r - n1);
    printf("Reverse of the no. = %d \n", r);
    printf("Absolute difference = %d", d);
}