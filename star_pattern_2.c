#include<stdio.h>
void main()
{
    int i,n,j;
    printf("Enter number of rows and columns:: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=n+1-i)
            printf("*");
            else
            printf(" ");
        }
         printf("\n");
    }

}

