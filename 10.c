#include<stdio.h>
#include<conio.h>
void main(){
	
	float celsius,fahrenheit;
	
	printf("Enter Temperature in fahrenheit:");
	scanf("%f", &fahrenheit);
	
	
	celsius=(fahrenheit-32)*5/9;
	
	printf("Temperature in celsius is = %f", celsius);
}
