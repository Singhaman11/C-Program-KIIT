//WAP to compare two strings.
#include<stdio.h>
#include<string.h>
void main()
{
    char st[50], st1[50];
    printf("Enter 2 string \n");
    gets(st);
    gets(st1);
    printf("String1 compared with String2: %d", strcmp(st,st1));     
         // Returns 0 (the strings are equal)
         // Returns n (the strings are not equal) [where n is some value]
}