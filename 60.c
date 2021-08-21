#include<stdio.h>
#include<conio.h>
void main(){
	
	int hours;
	hours=0;
	
	printf("Enter the hours:");
	scanf("%d",&hours);
	
	if(hours<=3){
		printf("Worker is highly efficient");
	}
	
	else if(hours<=4){
		printf("Worker improve your speed");
	}
	
	else if(hours<=5){
		printf("Take training to improve your speed");
	}
	
	else{
		printf("Leave the company");
	}
}
