//C Program to Count Uppercase Lowercase Special characters in string
#include<stdio.h>
int main(){
	char ch[20];
	int i,count_L=0,count_U=0,count_D=0,count_S=0,count_SS=0;
	printf("\nEnter any String: ");
	gets(ch);
	
	for(i=0;ch[i] != '\0';i++){
		if(ch[i]<=122 && ch[i]>=97){
		count_L++;
		}
		else if(ch[i]<=90 && ch[i]>=65){
		count_U++;
		}
		else if(ch[i]<=57 && ch[i]>=48){
		count_D++;
		}
		else if(ch[i] == ' ')
		count_S++;
	    else
			count_SS++;
		
	}
	printf("\nNumber of lowercase letters = %d\nNumber of Uppercase letters = %d\nNumber of digits = %d\nNumber of Special Symbols = %d\nNumber of digits = %d\nNumber of Spaces = %d\n",count_L,count_U,count_SS,count_D,count_S);
	return 0;
	
}