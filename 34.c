#include<stdio.h>
void main(){
	int n;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Number is even %d \n",n);
	}
	else{
		printf("NUmber is not odd %d \n",n);
	}
}
