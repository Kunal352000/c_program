#include<stdio.h>
void main(){
	int year;
	
	printf("Enter the year:");
	scanf("%d",&year);
	
	switch((year%4 == 0) && (year%100 != 0) || (year%400 == 0)){
		case 0:
			printf("Year is not leap:",year);
			break;
			
			case1:
				printf("Year is leap:",year);
				break;
	}
}
