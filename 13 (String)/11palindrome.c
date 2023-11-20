//WAP to check whether a string is palindrome or not.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50], st1[50];
    int a;
    printf("Enter a string \n");
    scanf("%s", st);
    strcpy(st1,st);
    strrev(st);
    a = strcmp(st,st1);
    if(a == 0)
        printf("String is palindrome");
    else
        printf("String is not a palindrome");
}