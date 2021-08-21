#include<stdio.h>
void main(){
	int n1,n2,l,x,i;
	
	printf("Enter the value of n1:");
	scanf("%d",&n1);
	
	printf("Enter the value of n2:");
	scanf("%d",&n2);
	
	if(n1>n2){
		l=n1;
	}
	else{
		l=n2;
	}
	
	for(i=1; i<=l/2; i++){
		if(n1%i==0 && n2%i==0){
			x=i;
		}
	}
	printf("HCF %d ",x);
}
