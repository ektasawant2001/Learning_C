#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k,n;
    printf("Enter 9 numbers for 1st matrix::");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&A[i][j]);

    printf("Enter 9 numbers for 2nd matrix::");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&B[i][j]);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
