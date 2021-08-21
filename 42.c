#include<stdio.h>
#include<conio.h>
void main(){
	
	int num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	if(num>0){
		printf("Number is positive");
	}
	
    else if(num<0){
    	
    	printf("Number is negtive");
	}
	
	else if(num==0){
		
		printf("number is zero");
		
	}
}
