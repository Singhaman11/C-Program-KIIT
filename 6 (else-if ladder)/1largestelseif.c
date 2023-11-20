//WAP to find the largest among three numbers using else-if ladder.
#include<stdio.h>
void main()
{
    int n1, n2, n3;
    printf("Enter three numbers \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1 > n2 && n1 > n3)
        printf("The largest no. is %d", n1);
    else if(n2 > n1 && n2 > n3)
        printf("The largest no. is %d", n2);
    else
        printf("The largest no. is %d", n3);
}