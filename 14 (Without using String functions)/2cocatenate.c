//WAP to concatenate two strings without using strcat() function.
#include<stdio.h>
void main()
{
    char st[50], st1[50];
    int ck = 0, l = 0, l1 = 0, t = 0, sl = 0;
    printf("Enter two string \n");
    scanf("%s %s", st, st1);
    while(st[l] != '\0')
        l++;
    while(st1[l1] != '\0')
        st[l++] = st1[l1++];
    st[l] = '\0';
    puts(st);
}