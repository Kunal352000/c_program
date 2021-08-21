#include<stdio.h>
void main(){
	float c,fh;
	
	printf("Enter temperature in feherneit:");
	scanf("%f",&fh);
	
	c=(fh-32)*5/9;
	
	printf("%f",c);
}
