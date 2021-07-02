#include<stdio.h>
void main()
{
    int i,j,r;
    for(i=1;i<=7;i++)
    {
        r=7-i;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i)
            {
               printf("%d ",r);
               r--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
