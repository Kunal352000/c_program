#include<stdio.h>
void main(){
	int a,b,c;
	
	printf("Enter the value of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	a=b;
	b=c;
	c=a;
	
	printf("%d %d %d",a ,b, c);
}
