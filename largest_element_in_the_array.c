#include<stdio.h>
void main()
{
    int i,n,a[n];
    printf("enter count::");
    scanf("%d",&n);
    printf("Enter elements::");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    int max=a[0];
    for(i=1;i<n;i++)
    {

        if(a[i]>max)
            max=a[i];
    }
    printf("hii\n");
    printf("largest Element in the given elements is %d",max);
}



