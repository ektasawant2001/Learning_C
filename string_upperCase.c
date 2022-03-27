#include<stdio.h>
#include<string.h>
int main(){
	char ch[40];
	int i;
	
	printf("\nEnter any string: ");
	gets(ch);
	
	for(i=0;ch[i] != '\0';i++){
		if(ch[i]<=122 && ch[i]>=97){
			ch[i] = ch[i] -32;
		}
	}
	
		puts(ch);
	
	
	return 0;
}