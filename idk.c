#include<stdio.h>
void main(){
	int n,i,s=0;
	
	printf("Enter any numbers:");
	scanf("%d",&n);
	
	for(i=0; i<=n/2; i++){
		if(n%i==0){
			printf("%d \n",i);
			s=s+i;
		}
	}
}
