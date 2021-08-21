#include<stdio.h>
void main(){
	char ch;
	printf("Enter any alphabet:");
	scanf("%c",&ch);
	

	while(ch<='z'){
		printf("%c \n",ch);
		ch++;
	}
}
