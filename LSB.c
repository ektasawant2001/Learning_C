#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    
    if(n & 1){
        printf("Least significant bit of %d is set 1",n);
    }
    else
    printf("Least significant bit of %d is set 0",n);
    
    return 0;
}
