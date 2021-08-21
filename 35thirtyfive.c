#include<stdio.h>
void main(){
	int n1,n2;
	
	printf("Enter the value of n1 and n2:");
	scanf("%d%d",&n1,&n2);
	
	if(n1>n2){
		printf("n1 is maximum is %d",n1);
	}
	else{
		printf("n2 is maximun is %d",n2);
	}
}
