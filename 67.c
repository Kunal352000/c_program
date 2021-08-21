#include<stdio.h>
void main(){
	int a,b,c,sum=180;
	
	printf("Enter the angles of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	
	switch((a+b+c == sum) && (a!= 0) && (b != 0) && (c != 0)){
		case 0:
			printf("Triangle is invalid:");
			break;
			
		case 1:
			printf("Triangle is valid:");
			break;	
	}
}
