#include<stdio.h>
void main(){
	int a,b,qui,rem;
	
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	
	qui=a/b;
	printf("%d \n",qui);
	
	rem=a%b;
	printf("%d \n",rem);
}
