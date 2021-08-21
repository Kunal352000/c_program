#include<stdio.h>
void main(){
	int a,b,c;
	
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("%d \n",a);
	printf("%d \n",b);

}
