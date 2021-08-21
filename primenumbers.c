#include<stdio.h>
void main(){
	int n,i,t=0;
	
	printf("Enter any integer:");
	scanf("%d",&n);
	
	for(i=2; i<=n/2; i++){
		if(n%i==0){
			t++;
		}
		
		if(t>0){
			printf("Not prime");
		}
		else{
			printf("Prime");
		}
	}
}
