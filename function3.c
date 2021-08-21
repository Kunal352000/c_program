#include<stdio.h>
int Max(int num1,int num2);
int Min(int num1,int num2);

int main(){
	int num1,num2,maximum,minimum;
	
	printf("Enter the value of num1 and num2:");
	scanf("%d%d",&num1,&num2);
	
	maximum=Max(num1,num2);
	minimum=Min(num1,num2);
	
	printf("%d maximum \n",maximum);
	printf("%d minmimum \n", minimum);
}

int Max(int num1,int num2){
	return(num1>num2)?num1:num2;
}

int Min(int num1,int num2){
	return(num1>num2)?num2:num1;
}
