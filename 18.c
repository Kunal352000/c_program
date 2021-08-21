#include<stdio.h>
#include<conio.h>
void main(){
	
	float side,area;
	
	printf("Enter the side of Equaliteral triangle:");
	scanf("%f", &side);
	
	area=(sqrt(3)/4)*(side*side);
	
	printf("Area of equaliteral triangle is = %f", area);
	
}
