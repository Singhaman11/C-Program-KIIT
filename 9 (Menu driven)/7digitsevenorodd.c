/*WAP to input a number and count the number of digits. The program further checks whether the number contains odd number of digits or even number of digits.
Sample Input: 749
Sample Output: Number of digits = 3
               The number contains odd number of digits.             */
#include<stdio.h>
void main()
{
    int n, c = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    while(n != 0)
    {
        n = n / 10;
        c++;
    }
    printf("No. of digtis = %d \n", c);
    if(c % 2 == 0)
        printf("The number contains even number of digits");
    else
        printf("The number contains odd number of digits");
}