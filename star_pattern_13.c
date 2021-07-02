#include<stdio.h>
void main()
{
    int i,j,r;
    for(i=1;i<=4;i++)
    {
        r=i;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=i+3)
            {
               printf("%d ",r);
               j<4?r++:r--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

