#include<stdio.h>
void main(){
	float c,f;
	
	printf("Enter temperature in fherniet:");
	scanf("%f",&f);
	
	c = (f-32)*5/9;
	
	printf("%f",c);
}
