#include<stdio.h>
#include<conio.h>
void main(){
	
	int days,year;
	float weeks;
	
	printf("Enter the Days:");
	scanf("%d",&days);
	
	year=days/365;
	weeks=(days-(year*365))/7;
	
	printf("Year is = %d \n", year);
	printf("Week is =%f \n", weeks);
}
