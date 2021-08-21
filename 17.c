#include<stdio.h>
#include<conio.h>
void main(){
	
	int base,height;
	float area;
	
	printf("Enter the base and height of triangle:");
	scanf("%d%d",&base,&height);
	
	area=(base*height)/2;
	
	printf("Area of triangle is=%f",area);
	
}
