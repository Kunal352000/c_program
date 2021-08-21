#include<stdio.h>
void main(){
	int week;
	
	printf("Enter the week number 1-7:");
	scanf("%d",&week);
	
	if(week==1){
		printf("Monday");
	}
	else if(week==2){
		printf("Tuesday");
	}
	else if(week==3){
		printf("Wednesday");
	}
	else if(week==4){
		printf("Thursday");
	}
	else if(week==5){
		printf("Friday");
	}
	else if(week==6){
		printf("Sturday");
	}
	else if(week==7){
		printf("Sunday");
	}
	else{
		printf("Enter 1-7.");
	}
}
