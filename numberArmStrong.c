#include<stdio.h>
int main(){
	int i,n,n1,sum=0,d;
	
	printf("Enter any numbers:");
	scanf("%d",&n);
	
	n1=n;
	
	while(n>0){
		d=n%10;
		n=n/10;
		
		sum=sum+(d*d*d);
	}
	
	if(sum==n1){
		printf("number is armstrong:");
	}
	
	else{
		printf("Number is not armstrong:");
	}
}
