#include<stdio.h>
void main(){
	int num;
	
	printf("Enter any number:");
	scanf("%d",&num);
	
	if(num%5==0){
		printf("Number is divisible by five");
	}
	else{
		printf("Number is not divisible");
	}
}
