#include<stdio.h>
int main()
{
    int a, b, div;

    printf("enter two integers:");
    scanf("%d %d", &a, &b);
    
    div = a/b;
 
    printf("%d/%d = %d", &a, &b, div);

    return 0;
     
}