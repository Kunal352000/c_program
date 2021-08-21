#include<stdio.h>
void main(){
	int a,b,c;
	
	printf("Enter any two angles:");
	scanf("%d%d",&a,&b);
	
	c=180-(a+b);
	
	printf("%d",c);
}
