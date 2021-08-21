#include<stdio.h>
#include<conio.h>
void main(){
	
	int n;
	char ch;
	
	printf("Press any key on keyboard:");
	scanf("%c",&ch);
	
	n=ch;
	
	if(n>=65 && n<=90){
		
	printf("Charcter is Uppercase");
	}
	
	else if(n>=97 && n<122){
		
		printf("Charcter is lowercase");
	}
	
	else if(n>=48 && n<=57){
		
		printf("Charter is mumber");
	}
	
	else if(n>=0 && n<=47 || n>=58 && n<=64 || n>=91 && n<=96 || n>=123 && n<=127){
		
		printf("Charter is Special symbol");
	}
}
