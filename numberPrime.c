#include<stdio.h>
int main(){
	int i,n,t=0;
	
	printf("Enter any numbers:");
	scanf("%d",&n);
	
	for(i=2; i<=n/2; i++){
		if(n%i==0){
			t++;
		}
		
		if(t>0){
			printf("Not prime");
			break;
		}
		
		else{
			printf("prime numbers:");
			break;
		}
	}
}
