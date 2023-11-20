/*WAP to check whether a given number is Armstrong number of order n or not.
(Armstrong number is a number that is equal to the sum of cubes of its digits.)
Example: 153
         1^3 = 1
         5^3 = 125
         3^3 = 27
         Sum = 1 + 125 + 27 = 153
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int n, r = 0, n1;
    float c = 0.0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    n1 = n;
    while(n != 0)
    {
        c = c + pow((n % 10),3);
        n = n / 10;
    }
    if(n1 == c)
        printf("%d is an Armstrong no.", n1);
    else
        printf("%d is not an Armstrong no.", n1);
}