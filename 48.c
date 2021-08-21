#include<stdio.h>
#include<conio.h>
void main(){
	
	int month;
	
	printf("Enter month number between 1-12:");
	scanf("%d", &month);
	
	if(month==1){
		printf("31 days/January");
	}
	
	else if(month==2){
		printf("28 or 29 days/ Feburary");
	}
	
	else if(month==3){
		
		printf("31 days/March");
	}
	
	else if(month==4){
		printf("30 days/April");
	}
	
	else if(month==5){
		printf("31 days/May");
	}
	
	else if(month==6){
		printf("30 days/June");
	}
	
	else if(month==7){
		printf("31 days/July");
		
	}
	
	else if(month==8){
		printf("31 days/August");
	}
	
	else if(month==9){
		printf("30 days/Septmber");
	}
	
	else if(month==10){
		printf("31 days/October");
	}
	
	else if(month==11){
		printf("30 days/November");
	}
	
	else if(month==12){
		printf("31 days/Decmber");
	}
	
	else{
		
		printf("Enter number between between 1-12");
	}
	
	
}
