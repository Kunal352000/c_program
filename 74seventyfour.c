#include<stdio.h>
void main(){
	int i,n;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		if(i%2==0){
			printf("\n %d",i);
		}
	}
}
