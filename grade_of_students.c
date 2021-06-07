#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks::");
    scanf("%d",&marks);
    if(marks>=90)
        printf("Grade-A++");
    else{
        if(marks>=75)
            printf("Grade-A");
        else{
            if(marks>=60)
                printf("Grade-B");
            else{
                if(marks>=45)
                    printf("Grade-C");
                else
                    printf("Grade-D");
            }
        }
    }
}
