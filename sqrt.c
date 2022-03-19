#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double result;
    printf("Enter any number: ");
    scanf("%d",&n);
    
    result =sqrt( n);
    
    printf("\n Square root of %d is %f",n,result);
    return 0;
}