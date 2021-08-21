#include<stdio.h>
#include<conio.h>
void main(){
	
	int cm,meter,km;
	
	printf("Enter the Centimeter");
	scanf("%d", &cm);
	
	meter=cm/100;
	km=cm/10000;
	
	printf("Total meter is = %d \n", meter);
	printf("Total kilometer is =%d \n", km);
	
}
