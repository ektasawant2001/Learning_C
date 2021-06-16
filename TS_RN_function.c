#include<stdio.h>
void add(int,int);
void main()
{
    int x,y;
    printf("Enter two numbers::");
    scanf("%d%d",&x,&y);
    add(x,y);
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("\nSum is %d",c);
}
