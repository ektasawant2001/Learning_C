#include<stdio.h>
int main(){
    float p,n,r,si;
    
    printf("Enter principle amount,number of years and rate of interest: ");
    scanf("%f%f%f",&p,&n,&r);
    
    si = p * r * n *0.01;
    
    printf("Simple interest = %f",si);
    
    return 0;
    
}
