//WAP to show the use of bit-wise AND, bit-wise OR and bit-wise XOR operator.
#include<stdio.h>
void main()
{
    int n, b;
    printf("Enter a number \n");
    scanf("%d", &n);
    b = n & 1;
    printf("%d becomes %d after bit-wise AND operation \n", n, b);
    b = n | 1;
    printf("%d becomes %d after bit-wise OR operation \n", n, b);
    b = n ^ 1;
    printf("%d becomes %d after bit-wise XOR operation \n", n, b);
}