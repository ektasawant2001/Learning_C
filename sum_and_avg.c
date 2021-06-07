#include<stdio.h>
void main()
{
 int a[10],sum=0,i;
 float avg;
 printf("Enter 10 numbers::");
 for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
 for(i=0;i<=9;i++)
 {
     sum=sum+a[i];
 }
 avg=sum/10.0;
 printf("sum of ten numbers is %d",sum);
 printf("\nAverage of ten numbers is %f",avg);

}
