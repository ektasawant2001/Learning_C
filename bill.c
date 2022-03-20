#include<stdio.h>
int main(){
    int a,b,c,d,total;
    float dis,bill;
    
    printf("Enter prices of 4 items: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    total = a + b + c + d;
    
    if(total<=600){
        printf("The total Bill is: %d",total);
        dis = total*0.04;
        bill = total - dis;
        printf("\nThe discount is: %f\n The final bill is: %f ",dis,bill);
    }
    else{
        printf("The total Bill is: %d",total);
        dis = total*0.14;
        bill = total - dis;
        printf("\nThe discount is: %f\n The final bill is: %f ",dis,bill);
    }
    return 0;
}