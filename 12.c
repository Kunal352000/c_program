#include<stdio.h>
#include<conio.h>
void main(){
	
	float p,r,t,SI;
	
	printf("Enter the principle:");
	scanf("%f",&p);
	
	printf("Enter the rate:");
	scanf("%f",&r);
	
	printf("Enter the time:");
	scanf("%f", &t);
	
	SI=(p*r*t)/100;
	
	printf("Simple interst is = %f", SI);
}
