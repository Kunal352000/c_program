#include<stdio.h>
void main(){
	int a,b,c,d,n,add;
	
	printf("Enter any five digit:");
	scanf("%d",&n);
	
	a=n/10000;
	n=n%10000;
	
	
	b=n/1000;
	n=n%1000;
	
	
	c=n/100;
	n=n%100;
	
	
	d=n/10;
	n=n%10;
	
	add=a+b+c+d+n;
	
	printf("%d",add);
}
