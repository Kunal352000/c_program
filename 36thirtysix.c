#include<stdio.h>
void main(){
	int year;
	
	printf("Enter the year:");
	scanf("%d",&year);
	
	if((year%4==0) && (year%100!=00) || (year%400==0)){
		printf("Leap year is %d \n",year);
	}
	else{
		printf("Year is not leap is %d",year);
	}
}
