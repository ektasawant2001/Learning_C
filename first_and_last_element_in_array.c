//Write a C Program to Display First and Last element of an array
#include<stdio.h>
int main(){
    int i,n,a[20];
    printf("Enter the count: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nThe fist element in array is: %d",a[0]);
    printf("\nThe last element in array is: %d",a[n-1]);
    return 0;
}
