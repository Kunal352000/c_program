#include<stdio.h>
#include<conio.h>
void main(){
	
	float radius,diameter,circumfernce,area;
	
	printf("Enter the radius");
	scanf("%f", &radius);
	
	diameter = 2*radius;
	circumfernce = 2*3.14*radius;
	area = 3.14*radius*radius;
	
	printf("Diameter of circle is = %f \n", diameter);
	printf("Cicumfernce of circle is = %f \n", circumfernce);
	printf("Area of circle is = %f \n", area);
}


