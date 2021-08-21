#include<stdio.h>
void main(){
	int n,i,sum=0;
	
	printf("Enter any value:");
	scanf("%d",&n);
	
	for(i=1; i<=n/2; i++){
		if(n%i==0){
			printf("%d \n",i);
			sum=sum+i;
		}
	}
}
