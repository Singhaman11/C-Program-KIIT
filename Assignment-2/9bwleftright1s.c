//WAP to show the use of bit-wise left-shift, bit-wise right-shift and 1’s complement operator.
#include<stdio.h>
void main()
{
    int n, b;
    printf("Enter a number \n");
    scanf("%d", &n);
    b = n << 1;
    printf("%d becomes %d after bit-wise left-shift operation \n", n, b);
    b = n >> 1;
    printf("%d becomes %d after bit-wise right-shift operation \n", n, b);
    b = ~n;
    printf("%d becomes %d after bit-wise 1's complement operation \n", n, b);
}