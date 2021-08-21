#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,quitonet,remainder;
	
	printf("Enter any two numbers:");
	scanf("%d%d", &a,&b);
	
	quitonet = a/b;
	printf("Quitonet is = %d \n", quitonet);
	remainder = a%b;
	printf("Remainder is = %d \n", remainder);
	
	
	
}
