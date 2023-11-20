//WAP to convert uppercase string to lowercase.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50];
    printf("Enter a string \n");
    gets(st);
    printf("String converted from Uppercase to Lowercase: %s", strupr(st));     
}