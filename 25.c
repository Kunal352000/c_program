#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c,d,n,add;
	
	printf("Enter the five digit number:");
	scanf("%d", &n);
	
	a=n/10000;
	n=n%10000;
	
	b=n/1000;
	n=n%1000;
	
	c=n/100;
	n=n%100;
	
	d=n/10;
	n=n%10;
	
	add=a+b+c+d+n;
	
    printf("Sum of five digit is = %d", add);
}
