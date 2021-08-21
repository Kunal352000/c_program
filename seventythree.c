#include<stdio.h>
void main(){
	char ch;
	
	printf("Enter alphabet:");
	scanf("%c",&ch);
	
	for(ch='a'; ch<'z'; ch++){
		printf("%c ",ch);
	}
}
