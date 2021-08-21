#include<stdio.h>
#include<conio.h>
void main(){
	
	int num;
	
	printf("Enter any number:");
	scanf("%d", &num);
	
	if(num%5==0){
		
		printf("Number is divided by five");
		
	}
	
	else{
		
		printf("Number is not divided by five");
	}
}
