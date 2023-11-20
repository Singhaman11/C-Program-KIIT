#include<stdio.h>
struct str1
{
    int x;
    char c;
};
struct str2
{
    int x : 24;
    int y: 8;
    // char c;
};
void main()
{
    printf("Size of str1 = %zu\n", sizeof(struct str1));
    printf("Size of str2 = %zu", sizeof(struct str2));
}