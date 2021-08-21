#include<stdio.h>
void main(){
	int num;
	
	printf("ENter the number:");
	scanf("%d",&num);
	
	switch(num%5==0){
		case 0:
			printf("Number is not divisible by 5.");
			break;
			
		case 1:
			printf("Number is divided by 5.");
			break;	
	}
}
