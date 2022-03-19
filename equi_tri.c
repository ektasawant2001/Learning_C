#include<stdio.h>
#include<math.h>
int main(){
    int s;
    float a;
    
    printf("Enter side of  the equilateral triangle: ");
    scanf("%d",&s);
    
    a =(sqrt(3))/4 * s * s;
    printf("Area of equilateral triangle = %f sq. units",a);
    
    return 0;
}