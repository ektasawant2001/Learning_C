#include<stdio.h>

int main(){
    int a,b,c,d,e,total;
    float avg;
    
    printf("Enter marks of five subjects:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    total = a + b + c + d + e;
    avg = total/5;
    
    printf("TOTAL = %d\nAVERAGE = %f\nPERCENTAGE = %f %%",total,avg,avg);
    
    return 0;
    
}