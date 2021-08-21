#include<stdio.h>
void main(){
	int i,n;
	
	printf("Enter the reverse range:");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		printf("\n %d",i);
	}
}
