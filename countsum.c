#include<stdio.h>
void main(){
	int num,count,sum=0;
	
	printf("Enter the numbers:");
	scanf("%d",&num);
	
	while(num!=0){
		count++;
		num=num/=10;
		sum=sum+count;
	}
	
	printf("sum of digit %d ",sum);
}
