#include<stdio.h>
double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main(){
	float radius,dia,circ,area;
	
	printf("Enter the radius:");
	scanf("%f",&radius);
	
	dia=getDiameter(radius);
	circ=getCircumference(radius);
	area=getArea(radius);
	
	printf("%2f\n",dia);
	printf("%2f\n",circ);
	printf("%2f\n",area);
}

double getDiameter(double radius){
	return(2*radius);
}

double getCircumference(double radius){
	return(2*3.14*radius);
}

double getArea(double radius){
	return(3.14*radius*radius);
}
