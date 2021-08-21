#include<stdio.h>
void main(){
	int i,n,s=0;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	for(i=0; i<=n; i++){
		s=s+i;
	}
	printf("%d \n",s);
}
