#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c;
	
	printf("Enter the value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	c=a;
	a=b;
	b=c;
	
	printf("After swapping value a=%d b=%d c=%d", a,b,c);
}
