#include<stdio.h>
void main()
{
 int i,j,n,m;
 printf("Enter number of rows :: ");
 scanf("%d",&n);
 printf("Enter number of columns(rows+4):: ");
 scanf("%d",&m);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=m;j++)
     {
         if(j>=n+1-i&&j<=i+4)
            printf("*");
         else
            printf(" ");
     }
     printf("\n");
 }

}
