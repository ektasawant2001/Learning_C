#include<stdio.h>

struct student{
	char name[10];
	char class;
	int roll_no;
	int marks;
	
};

int main(){
	struct student info;
	printf("Enter name of student: ");
	gets(info.name);
	
	printf("\nEnter class of student: ");
	scanf("%c",&info.class);
	
	printf("\nEnter roll no of student: ");
	scanf("%d",&info.roll_no);
	
	printf("\nEnter marks of student: ");
	scanf("%d",&info.marks);
	
	printf("\nName: %s",info.name);
	printf("\nClass: %c",info.class);
	printf("\nRoll no: %d",info.roll_no);
	printf("\nMarks: %d",info.marks);
	
	return 0;
}
