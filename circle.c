#include<stdio.h>
int main(){
    int r,d;
    float a,c;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    
    d = 2 * r;
    c = 2 * 3.14f *r;
    a = 3.14f * r * r; 
    
    printf("Diameter = %d units\nCircumference = %f units\nArea = %f sq.units",d,c,a);
    
    return 0;
}
