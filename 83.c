#include<stdio.h>
void main(){
	int num,sum;
	
	printf("Enter the digits:");
	scanf("%d",&num);
	
	while(num!=0){
		sum += num%10;
		
		num = num/10;
	}
	
	printf("Sum of digit is %d",sum);
}
