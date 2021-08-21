#include<stdio.h>
void main(){
	int num,product=1;
	
	printf("Enter the digits:");
	scanf("%d",&num);
	
	while(num!=0){
		product=product*(num%10);
		num=num/10;
	}
	
	printf("Product of number is %d",product);
}
