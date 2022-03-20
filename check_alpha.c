#include<stdio.h>

int main(){
    char c;
    printf("Enter any character: ");
    scanf("%c",&c);
    
    if((c<=122 && c>=97) ||(c<=90 && c>=65)){
        printf("It is alphabet");
    }
    else
    printf("It is not alphabet");
    
    return 0;
    
}
