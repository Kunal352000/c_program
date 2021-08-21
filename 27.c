#include<stdio.h>
#include<conio.h>
void main(){
	
	int a, b, c, n;
	
	printf("Enter the three digit number:");
	scanf("%d", &n);
	
		a=n/100;
	n=n%100;
		
	
	printf("Total number of 100 Rupees note is %d \n", a);
	
	b=n/50;
	n=n%50;
	
	printf("Total number of 50 Rupees note is %d \n", b);
	
	c=n/10;
	
	
	
	printf("Total number of 10 Rupees note is %d \n", c);
	
	
}
