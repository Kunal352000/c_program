#include<stdio.h>
void main(){
	float cm,m,km;
	
	printf("Enter cm:");
	scanf("%f",&cm);
	
	m=cm/100;
	printf("%f \n",m);
	
	km=cm/100000;
	printf("%f",km);
}
