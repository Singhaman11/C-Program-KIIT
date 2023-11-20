#include<stdio.h>
struct Point
{
    int x, y;
};
int main()
{
    struct Point point1 = {5, -1};
    struct Point point2 = {0, 8};
    struct Point *ptr1 = &point1;
    struct Point *ptr2 = &point2;
    printf("The coordinate of point1 is (%d, %d) \n", ptr1 -> x, ptr1 -> y);
    printf("The coordinate of point2 is (%d, %d)", ptr2 -> x, ptr2 -> y);
}