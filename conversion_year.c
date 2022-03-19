#include<stdio.h>

int main(){
    int n,days, years,weeks;
    
    printf("Enter number of days: ");
    scanf("%d",&n);
    
    years = n/365; 
    weeks = (n % 365)/7;
    days = n- ((years*365) + (weeks*7));
    
    printf("\n\t %d days = %d year/s,%d week/s and %d day/s",n,years,weeks,days);
    return 0;
}