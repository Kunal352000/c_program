#include<stdio.h>
void main(){
	int n;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	while(n>0){
		if(n<0)
		break;
		printf("Enter the numbers:");
		scanf("%d",n);
	}
}
