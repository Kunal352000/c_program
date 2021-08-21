#include<stdio.h>
void main(){
	char ch;
	
	printf("Enter any charcter:");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
		printf("It is a charcter");
	}
	else{
		printf("It is not a charcter");
	}
}
