#include<stdio.h>
#include<conio.h>
void main(){
	
	int weeknumber;
	
	printf("Enter the week number between 1-7:");
	scanf("%d",&weeknumber);
	
	if(weeknumber==1){
		printf("Monday");
	}
	
	else if(weeknumber==2){
		printf("Tuesday");
	}
	
	else if(weeknumber==3){
		printf("Wednesday");
	}
	
	else if(weeknumber==4){
		printf("Thursday");
	}
	
	else if(weeknumber==5){
		printf("Friday");
	}
	
	else if(weeknumber==6){
		printf("Sturday");
	}
	
	else if(weeknumber==7){
		printf("Sunday");
	}
	
	else{
		printf("Enter number between 1-7 ");
	}
}
