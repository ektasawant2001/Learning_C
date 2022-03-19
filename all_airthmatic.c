#include<stdio.h>
int main(){
    int a,b;
    
    printf("Enter any two numbers: ");
    scanf("%d%d",&a,&b);
    
    printf("sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nModulus = %d",(a+b),(a-b),(a*b),(a/b),(a%b));
    
    return 0;
}