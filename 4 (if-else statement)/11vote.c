//WAP to determine whether a person is eligible to vote or not.
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the age \n");
    scanf("%d", &a);
    if(a >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible to vote");   
}