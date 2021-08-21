#include<stdio.h>
void main(){
	int n,d,sum=0,n1;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	n1=n;
	while(n>0){
		d=n%10;
		n=n/10;
		sum=sum+(d*d*d);
	}
	
	if(sum==n1){
		printf("%d number is armstrong:",n1);
	}
	else{
		printf("%d number is not armstrong ",n1);
	}
	
}
