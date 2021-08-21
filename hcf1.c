#include<stdio.h>
int main(){
	int num1,num2,i,l,hcf;
	
	printf("Enter any two numbers:");
	scanf("%d%d",&num1,&num2);
	
	if(num1>num2){
		l=num1;
	}
	else{
		l=num2;
	}
	
	for(i=1; i<=l/2; i++){
		if(num1%i==0 && num2%i==0){
			hcf=i;
		}
	}
	
	printf("%d",hcf);
}
