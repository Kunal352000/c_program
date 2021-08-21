#include<stdio.h>
void main(){
	float c,f;
	
	printf("Enter temperature in celsius:");
	scanf("%f",&c);
	
	f=((c*9/5)+32);
	
	printf("%f",f,c);
}
