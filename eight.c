#include<stdio.h>
void main(){
	float cm,m,km;
	
	printf("Enter the cm:");
	scanf("%f",&cm);
	
	m=cm/100.0;
	km=cm/100000.0;
	
	printf("%.2f \n",m);
	printf("%.2f",km);
}
