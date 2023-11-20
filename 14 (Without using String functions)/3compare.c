//WAP to compare two strings without using strcmp() function.
#include<stdio.h>
void main()
{
    char st[50], st1[50];
    int ck = 0, l = 0;
    printf("Enter two string \n");
    gets(st);
    gets(st1);
    while(st[l] != '\0')
        l++;
    for(int i = 0; i < l; i++)
    {
        if(st[i] == st1[i])
            ck++;
        else
            break;
    }
    if(ck == l)
        printf("Both the strings are same");
    else
        printf("The two strings are not same");
}