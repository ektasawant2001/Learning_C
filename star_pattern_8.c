#include<stdio.h>
void main()
{
    int j,i,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=i+3&&j>=5-i)
            {
                printf("%d ",k);
                j<4?k++:k--;
            }

            else
                printf("  ");
        }
        printf("\n");
    }
}
