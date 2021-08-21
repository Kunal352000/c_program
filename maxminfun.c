#include<stdio.h>
int Max(num1,num2);
int Min(num1,num2);

int main(){
	int num1,num2,maximum,minimum;
	
	printf("Enter the num1 and num2:");
	scanf("%d%d",&num1,&num2);
	
	maximum=Max(num1,num2);
	minimum=Min(num1,num2);
	
	printf("Maximum number is %d\n",maximum);
	printf("Minimum number is %d\n",minimum);
}

	int Max(num1,num2){
		return(num1>num2)?num1:num2;
	}
	
	int Min(num1,num2){
		return(num1>num2)?num2:num1;
	}
