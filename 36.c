#include<stdio.h>
#include<conio.h>
void main(){
	
	int year;
	
	printf("Enter the year:");
	scanf("%d", &year);
	
	if(year%4 == 0  || year%100 == 0 || year%400 == 0 ){
		
		printf("Year is leap = %d", year);
		
	}
	
	else{
		
		printf("Year is not leap");
	}
	
}
