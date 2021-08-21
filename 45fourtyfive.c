#include<stdio.h>
void main(){
	char ch;
	
	printf("Enter any alphabet:");
	scanf("%c",&ch);
	
	if((ch=='a' || ch=='i' || ch=='e' || ch=='o'||ch=='u') || (ch=='A' || ch=='E' || ch=='I'|| ch=='O' || ch=='U')){
		printf("Alphabet is vowel is %c.\n",ch);
	}
	
	else if((ch>='a' && ch<='z') || (ch>='A' && ch<='B')){
		printf("Alpabet is constant is %c.\n",ch);
	}
	else{
		printf("Please enter any charcter:");
	}
}
