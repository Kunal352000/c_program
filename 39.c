#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c,n1,n,rev;
	
	printf("Enter the four digit number:");
	scanf("%d",&n);
	
	n1=n;
	
	a=n/1000;
	n=n%1000;
	
	b=n/100;
	n=n%100;
	
	c=n/10;
	n=n%10;
	
	rev= (n*1000) + (c*100) + (b*10) + a;
	
	if(rev==n1){
		
		printf("Number is palidrone");
	}
	
	else{
		
		printf("Number is not palindrone");
	}
	
}
