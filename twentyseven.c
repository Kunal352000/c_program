#include<stdio.h>
void main(){
	int a,b,c,d,n,rev;
	
	printf("Enter five digit numbers:");
	scanf("%d",&n);
	
	a=n/10000;
	n=n%10000;
	
	b=n/1000;
	n=n%1000;
	
	c=n/100;
	n=n%100;
	
	d=n/10;
	n=n%10;
	
	rev=(n*10000)+(d*1000)+(c*100)+(b*10)+a;
	
	printf("%d",rev);
}
