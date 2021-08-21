#include<stdio.h>
void main(){
	int n,i,sum=0,n1,d;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	n1=n;
	while(n>0){
		d=n%10;
		n=n/10;
		sum=sum+(d*d*d);
	}
	
	if(sum==n1){
		printf("Number is armstrong:");
	}
	else{
		printf("Number is not strong:");
	}
}
