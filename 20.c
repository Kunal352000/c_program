#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b;
	
	printf("Enter the two numbers:");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapped the values is a = %d b=%d \n", a,b);
}
