#include<stdio.h>
#include<conio.h>
void main(){
	
	int side1,side2,side3;
	
	printf("Enter the sides of triangle:");
	scanf("%d%d%d", &side1,&side2,&side3);
	
	if(side1==side2 && side1==side3){
		printf("Traingle is Euqaliteral");
	}
	
	else if(side1==side2 || side2==side3 || side1==side3){
		printf("Triangle is isosceles");
	}
	
   else{
   	printf("Triangle is scalene");
   }
}
