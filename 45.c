#include<stdio.h>
#include<conio.h>
void main(){
	
	char ch;
	printf("Enter any alaphet:");
	scanf("%c", &ch);
	
	if(ch =='a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U'){
		
		printf("Vowel");
	}
	
	else{
		
		printf("Constant");
	}
}
