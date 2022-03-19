#include<stdio.h>
#include<math.h>
int main(){
    float p,n,r,ci;
    
    printf("Enter principle amount,number of years and rate of interest: ");
    scanf("%f%f%f",&p,&n,&r);
    
    ci = p * pow((1 + r / 100),n);
    
    printf("Compound interest = %f",ci);
    
    return 0;
    
}