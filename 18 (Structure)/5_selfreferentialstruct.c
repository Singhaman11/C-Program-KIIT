#include<stdio.h>
struct str
{
    int mem1;
    int mem2;
    struct str *next;
};
void main()
{
    struct str var1 = {11, 9, NULL};
    struct str var2 = {56, 10, NULL};
    var1.next = &var2;
    struct str *ptr = &var1;
    printf("var2.mem1 = %d\n", ptr -> next -> mem1);
    printf("var2.mem1 = %d\n", var1);
    printf("var2.mem2 = %d", ptr -> next -> mem2);
    // printf("var2.mem2 = %d\n", var1.next -> mem2);
}