#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c,n,add;
	
	printf("Enter Four digit number:");
	scanf("%d", &n);
	
	a=n/1000;
	n=n%1000;
	
	b=n/100;
	n=n%100;
	
	c=n/10;
	n=n%10;
	
	
	add = a + b + c + n; 
	
	printf("Sum of four digit is = %d", add);
	
}
