#include<stdio.h>
#include<conio.h>
void main(){
	
	 int side1,side2,side3;
	 
	 
	printf("Enter the the first side of triangle is: \n");
	scanf("%d", &side1);
	
	printf("Enter the the second side of triangle is: \n");
	scanf("%d", &side2);
	
	printf("Enter the the third side of triangle is: \n");
	scanf("%d", &side3);
	if((side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2)){
		
		printf("Triangle is valid.");
	}
	
	else{
		
		printf("Triangle is invalid.");
	}
}
