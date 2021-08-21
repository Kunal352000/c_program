#include<stdio.h>
double cube(double num);
int main(){
	int num;
	double c;
	
	printf("Enter any numbers:");
	scanf("%d",&num);
	
	c=cube( num);
	
	printf("Cube of %d is %2f",num,c);
}

double cube(double num){
	return(num*num*num);
}
