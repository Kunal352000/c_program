#include<stdio.h>
int main(){
	int i,n,n1,d,f,sum=0;
	
	printf("Enter any numbers:");
	scanf("%d",&n);
	
	n1=n;
	while(n>0){
		d=n%10;
		n=n/10;
		f=1;
		
		for(i=1; i<=d; i++){
			f=f*i;
		}
		sum=sum+f;
	}
	
	if(sum==n1){
		printf("Number is strong:");
	}
	
	else{
		printf("Number is not strong:");
	}
	
	return 0;
}
