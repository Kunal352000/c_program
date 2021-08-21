#include<stdio.h>
#include<conio.h>
void main(){
	
	int days;
	days=0;
	
	printf("Enter the days:");
	scanf("%d",&days);
	
	if(days<5){
		printf("Challan 50 paise");
	}
	
	else if(days<10){
		printf("Challan 1 rupees");
	}
	
	else if(days<30){
		printf("Challan 10 rupess");
	}
	
	else{
		printf("Member ship cancelled");
	}
}
