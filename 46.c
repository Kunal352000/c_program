#include<stdio.h>
#include<conio.h>
void main(){
	
	char ch;
	printf("Enter any charcter :");
	scanf("%c", &ch);
	
	if(ch>='A' && ch<='Z'){
		
		printf("charcter is uppercase %c", ch);
	}
	
	else if(ch>='a' && ch<='z'){
		
		printf("Charcter is lowercase  %c", ch);
	}
	
	else{
		
		printf("%c is not a charcter", ch);
	}
}
