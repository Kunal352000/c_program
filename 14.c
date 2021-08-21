#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c;
	
	printf("Enter the two angles:");
	scanf("%d%d",&a,&b);
	
	c=180-(a+b);
	
	printf("Third angle of triangle is %d", c);
}
