#include<stdio.h>
int main(){
    int l;
    float k;
    printf("Enter length in cm: ");
    scanf("%d",&l);
    
    k = l * 0.001f;
    
    printf("length in m = %d m\nlength in km = %f km",l,k);
    
    return 0;
}