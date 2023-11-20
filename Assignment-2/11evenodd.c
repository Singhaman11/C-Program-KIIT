//WAP to check a number is odd or even using bitwise AND, OR and XOR.
void main()
{
    int n, c;
    printf("Enter a number \n");
    scanf("%d", &n);
    printf("Using Bitwise AND \n");
    c = (n & 1 == 1) ? printf("%d is an Odd no. \n", n) : printf("%d is an Even no. \n", n);
    /*printf("Using Bitwise OR \n");
    c = ((n | 1) == 1) ? printf("%d is an Even no. \n", n) : printf("%d is an Odd no. \n", n);*/
    printf("Using Bitwise XOR \n");   
    c = ((n^1) == (n-1))? printf("%d is an Odd no. \n", n) : printf("%d is an Even no. \n", n);
    //Another way c = ((n ^ 1) % 2 == 0) ? printf("%d is an Odd no. \n", n) : printf("%d is an Even no. \n", n);
}