/*WAP to enter a number. If the number is positive even, display three succeeding even numbers. If the number is negative odd, display three preceding odd numbers otherwise, display the message ‘Number is neither a positive even nor a negative odd’.
Sample Input: -21
Sample Output: -23, -25, -27
Sample Input: 34
Sample Output: 36,38,40 */
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a no. \n");
    scanf("%d", &n);
    if(n >= 0 && (n % 2 == 0))
        printf("%d, %d, %d", (n + 2), (n + 4), (n + 6));
    else if(n < 0 && (n % 2 == -1))
        printf("%d, %d, %d", (n - 2), (n - 4), (n - 6));  
    else
        printf("Number is neither a positive even nor a negative odd"); 
}