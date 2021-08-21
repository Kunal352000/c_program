#include<stdio.h>
void main(){
	int i,n;
	
	printf("Enter the limit:");
	scanf("%d",&n);
	
	printf("Natural numbers from %d to 1: \n",n);
	
	for(i=n; i>=1; i--){
		printf("%d  ",i);
	}
}
