//counting number of words in strings or length of string
#include<stdio.h>
int main(){
	char ch[40];
	int i,count=0;
	printf("\nEnter any string: ");
	gets(ch);
	for(i=0;ch[i] != '\0';i++)
	{
		count++;
	}
	printf("length of string is %d",count);
	return 0;
}