#include<stdio.h>
void main(){
	int n,i,t=0;
	
	printf("Enter the value:");
	scanf("%d",&n);
	
	for(i=2; i<=n/2; i++){
		if(n%i==0){
			t++;
		}
		
		if(t>0){
			printf("Number is not prime %d",t);
		}
		else{
			printf("Number is prime %d",t);
		}
	}
}
