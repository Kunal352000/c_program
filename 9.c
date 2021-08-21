#include<stdio.h>
#include<conio.h>
void main(){
	
	float celsius,fahreheit;
	
	printf("Enter temperature in celsius:");
	scanf("%f", &celsius);
	
	fahreheit = celsius* 9/5 +32;
	
    printf("Fahreheit Temperature is = %f", fahreheit);	
}
