#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c,d,n,rev;
	
	printf("Enter the five digit reverse number");
	scanf("%d", &n);
	
	a=n/10000;
	n=n%10000;
	
	b=n/1000;
	n=n%1000;
	
	c=n/100;
	n=n%100;
	
	d=n/10;
	n=n%10;
	
	rev=n*10000 + d*1000 + c*100 + b*10 + a;
	
	printf("Reverse number of five digit is = %d",rev);
}
