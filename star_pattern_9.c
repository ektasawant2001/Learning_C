#include<stdio.h>
void main()
{
    int j,i;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i+3||j<=5-i)
            {
                printf(" %c",k);
                j<4?k++:k--;
            }

            else
               {
                  printf("  ");
                  if(j==4)
                     k--;
               }
        }
        printf("\n");
    }
}

