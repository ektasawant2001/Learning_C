#include<stdio.h>
void main()
{
    int x,y,max;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    max=x>y?x:y;
    printf("Greater number is %d",max);
}
