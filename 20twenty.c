#include<stdio.h>
void main(){
	int a,b;
	
	printf("Enter any two numbers:");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("%d \n",a);
	printf("%d \n",b);
}
