#include<stdio.h>
void main(){
	int n,sum=0,i,n1,m=1;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	n1=n;
	
	for(i=1; i<=n/2; i++){
		if(n%i==0){
			sum=sum+i;
			m=m*i;
		}
	}
	if(sum==m && m==n1){
		printf("Number is perfect");
	}
	else{
		printf("Number is not perfect");
	}
}
