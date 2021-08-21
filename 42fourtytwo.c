#include<stdio.h>
void main(){
	int num;
	
	printf("Enter any numbers:");
	scanf("%d",&num);
	
	if(num>0){
		printf("Number is positive:");
	}
	else if(num<0){
		printf("Number is negtive:");
	}
	else{
		printf("Number is zero:");
	}
}
