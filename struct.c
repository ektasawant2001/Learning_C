#include<stdio.h>

struct student{
	char name[10];
	char class;
	int roll_no;
	int marks;
	
};

int main(){
	struct student info ={ "ekta",'B',64,86};
	
	printf("\nName: %s",info.name);
	printf("\nClass: %c",info.class);
	printf("\nRoll no: %d",info.roll_no);
	printf("\nMarks: %d",info.marks);
	
	return 0;
}
