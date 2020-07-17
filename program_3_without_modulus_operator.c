#include<stdio.h>
void main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x&1)
    printf("odd number");
    else
        printf("even number");
}
