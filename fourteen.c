#include<stdio.h>
void main(){
	int base,expo,power;
	
	printf("Enter the base:");
	scanf("%d",&base);
	
	
	printf("Enter the expo:");
	scanf("%d",&expo);
	
	power=pow(base,expo);
	
	printf("%d",power);
	
	
}
