#include<stdio.h>
int main(){
    int a,b,c;
    
    printf("Enter any three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    
    (a>b & a>c) ?  printf("Greatest number is:%d",a) : ((b>c) ? printf("Greatest number is:%d",b) : printf("Greatest number is:%d",c));

    return 0;
}
