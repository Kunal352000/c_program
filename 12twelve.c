#include<stdio.h>
void main(){
	float p,r,t,si;
	
	printf("Enter the principal:");
	scanf("%f",&p);
	
	printf("Enter the rate:");
	scanf("%f",&r);
	
	printf("Enter the time:");
	scanf("%f",&t);
	
	
	si=p*r*t/100;
	
	printf("%f",si);
}
