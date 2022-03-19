#include<stdio.h>
int main(){
    int l,w;
    float p;
    printf("Enter length and width of triangle: ");
    scanf("%d%d",&l,&w);
    
    p = 2 * ( l + w );
    
    printf("Perimeter of reactangle is:%f units",p);
    
    return 0;
}