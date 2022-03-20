#include<stdio.h>
#define BITS sizeof(int) * 8
int main(){
    int n,msb;
    printf("Enter any number: ");
    scanf("%d",&n);
    
     msb = 1 << (BITS - 1);
    
    if(n & msb){
        printf("Most significant bit of %d is set 1",n);
    }
    else
    printf("Most significant bit of %d is set 0",n);
    
    return 0;
}