#include<stdio.h>
void main(){
	int days,weeks,year;
	
	printf("Enter days:");
	scanf("%d",&days);
	
	year=days/365;
	printf("year is %d \n",year);
	
	weeks=(days%365)/7;
	printf("Week is %d \n",weeks);
	
	days=days-((year*365)+(weeks*7));
	printf("Days is %d \n",days);
}
