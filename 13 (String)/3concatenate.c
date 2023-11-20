//WAP to concatenate two strings.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50], st1[50];
    printf("Enter 2 string \n");
    scanf("%s %s", st, st1);
    printf("String1 concatenated with String2: %s", strcat(st,st1));
} 