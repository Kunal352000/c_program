#include<stdio.h>
#include<math.h>
void main(){
	float side,area;
	
	printf("Enter the side of triangle:");
	scanf("%f",&side);
	
	area=(sqrt(3)/4)*(side*side);
	
	printf("%f",area);
}
