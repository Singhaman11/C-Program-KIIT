/*WAP to find the GCD of two numbers. The Greatest Common Divisor (GCD) of two integers is calculated by the continued division method. Divide the larger number by the smaller, the remainder then divides the previous divisor. The process repeats unless the remainder reaches to zero. The last divisor results in GCD.
Sample Input: 45, 20
Sample Output: GCD = 5        */
#include<stdio.h>
void main()
{
    int a, b, GCD;
    printf("Enter two nos. \n");
    scanf("%d %d", &a, &b);
    int g = (a > b) ? a : b;
    for(int i = 1; i <= g; i++)
    {
        if((a % i == 0) && (b % i == 0))
            GCD = i;
    }
    printf("Greatest Common Divisor(GCD) of two integer = %d ", GCD);
}