#include<stdio.h>
void main(){
	char ch;
	
	printf("Enter any Alpabet:");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z'){
		printf("%c is lowercase",ch);
	}
	else if(ch>='A' && ch<='Z'){
		printf("%c is uppercase",ch);
	}
	else{
		printf("Please enter any alphabet.");
	}
}
