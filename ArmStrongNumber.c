#include<stdio.h>
int main(){
	int i,n,n1,d,sum=0;
	
	printf("Enter any numbers:");
	scanf("%d",&n);
	
	n1=n;
	while(n>0){
		d=n%10;
		n=n/10;
		sum=sum+(d*d*d);
	}
	
	if(sum==n1){
		printf("NUmber is armstrong:");
	}
	
	else{
		printf("number is notarmstrong:");
	}
}
