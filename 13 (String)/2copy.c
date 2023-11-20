//WAP to copy one string to another string.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50], st1[50];
    printf("Enter 2 string \n");
    gets(st);
    gets(st1);
    printf("String2 copied to String1: %s", strcpy(st,st1));
}