#include<stdio.h>
void main(){
	int n,quiot,rem;
	
	printf("Enter the value:");
	scanf("%d",&n);
	
	n=n/10;
	printf("QUiotent %d \n",n);
	
	n=n%10;
	printf("Remainder %d \n",n);
}
