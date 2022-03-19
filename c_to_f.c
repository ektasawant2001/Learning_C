#include<stdio.h>
int main(){
    int c;
    float f;
    printf("Enter temperature(in degree celcius): ");
    scanf("%d",&c);
    
    //(0°C × 9/5) + 32 = 32°F
    f = (c * 1.8f) + 32;
    
    printf("Temperature in fahrenheit is: %f F ",f);
    
    return 0;
}