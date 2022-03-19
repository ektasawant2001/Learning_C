#include<stdio.h>
int main(){
    int x,y,z;
    
    printf("Enter two angles of triangle: ");
    scanf("%d%d",&x,&y);
    
    z = 180 - x - y;
    
    printf("The angles of triangle are:\nfirst angle = %d\nsecond angle =%d\nthird angle =%d",x,y,z);
                
    return 0;
}