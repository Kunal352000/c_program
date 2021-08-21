#include<stdio.h>
#include<conio.h>
void main (){
	
	int side1,side2,side3;
	
	printf("Enter three sides of triangle :");
	scanf("%d%d%d", &side1,&side2,&side3);
	
	if((side1+side2>side3) || (side2+side3>side1) || (side1+side3>side2)){
		printf("Traingle is valid");
	}
	
	else{
		printf("Triangle is invalid");
	}
}
