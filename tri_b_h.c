#include<stdio.h>
int main(){
    float h,b,a;
    
    
    printf("Enter base and height of triangle: ");
    scanf("%f%f",&b,&h);
    
    a = 0.5 * b * h;
    
    printf("Area of triangle is: %f sq.units",a);
    return 0;
}