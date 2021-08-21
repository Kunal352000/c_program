#include<stdio.h>
void main(){
	int i,n,sum=0;
	
	printf("Enter the limit:");
	scanf("%d",&n);
	
	for(i=0; i<=n; i++){
		sum=sum+i;
	}
	printf("sum of numbers %d is = %d \n",n,sum);
}
