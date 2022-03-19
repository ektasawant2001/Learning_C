#include<stdio.h>
int main(){
    int f;
    float c;
    printf("Enter temperature(in fahrenheit: ");
    scanf("%d",&f);
    
    c = (f - 32) * 0.55555f;
    // (32°F − 32) × 5/9 = 0°C
    
    printf("Temperature in celcius is: %f degree",c);
    
    return 0;
}