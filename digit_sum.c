#include<stdio.h>

int main(){
    int n,sum=0,rem,m;
    
    printf("Enter any number: ");
    scanf("%d",&n);
    
    m=n;
    
    while(n != 0){
        rem = n % 10;
        sum = sum + rem;
         n = n/10;
    }
    
    printf("Sum of digits of %d is: %d",m,sum);
    return 0;
}