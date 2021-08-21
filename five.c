#include<stdio.h>
void main(){
	int length,width,perimeter;
	
	printf("Enter the length of perimeter:");
	scanf("%d \n",&length);
	
	printf("Enter the width of perimeter:");
	scanf("%d \n",&width);
	
	perimeter = 2*(length+width);
	
	printf("PErimter of rectangle is %d",perimeter);
	
	
}
