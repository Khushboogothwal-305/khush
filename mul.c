#include<stdio.h>
int main()
{
    int a, b, mul;

    printf("enter two integers:");
    scanf("%d %d", &a, &b);

    mul = a*b;

    printf("%d*%d = %d", &a, &b, mul);

    return 0;
}