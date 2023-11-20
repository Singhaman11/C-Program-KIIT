#include<stdio.h>
struct str1
{
    int i;
    char c;
};
struct str2
{
    char c;
    int i;
} __attribute((packed)) __;
int main()
{
    printf("Size of str1: %d\n", sizeof(struct str1));
    printf("Size of str2: %d\n", sizeof(struct str2));
}