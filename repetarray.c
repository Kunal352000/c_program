#include<stdio.h>
void main(){
	int seen[10]={0},n,rem;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	while(n>0){
		rem=n%10;
		if(seen[rem]==1)
		break;
		seen[rem]=1;
		n=n/10;
	}
	
	if(n>0){
		printf("yes");
	}
	else
	printf("No");
}
