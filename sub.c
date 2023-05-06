#include<stdio.h>
int main()
{
    int a, b, sub;

    printf("enter two integers: ");
    scanf("%d %d",&a, &b);

    sub = a - b;
    printf("%d - %d = %d", &a, &b, sub);

    return 0;

}
