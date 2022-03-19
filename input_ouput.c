#include<stdio.h>

int main(){
    char c;
    signed short v;
    
    printf("Enter charcter value: ");
    scanf("%c",&c);
    
    printf("Enter signed short value: ");
    scanf("%hd",&v);
    
    printf("You entered character:%c\nYou entered signed short:%d",c,v);
    
    return 0;
}