#include<stdio.h>
void main(){
	int num,count;
	
	printf("Enter the numbers:");
	scanf("%d",&num);
	
	while(num!=0){
		count++;
		num=num/=10;
	}
	
	printf("Total digit %d ",count);
}
