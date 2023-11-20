//WAP to copy a string to another string without using strcpy() function.
#include<stdio.h>
void main()
{
    char st[50], st1[50];
    int ck = 0, l = 0;
    printf("Enter string \n");
    gets(st);
    while(st[l] != '\0')
        l++;
    for(int i = 0; i < l; i++)
        st1[i] = st[i];
    st1[l] = '\0';
    printf("String1 copied to String2: %s", st1);
}