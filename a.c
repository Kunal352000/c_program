#include<stdio.h>
void main(){
	int sal[12];
	int i,eno,sum=0;
	
	printf("Enter Employee number:");
	scanf("%d",&eno);
	
	printf("Enter salary of 12 month:");
	for(i=0; i<=12; i++){
		scanf("%d",&sal[i]);
		sum=sum+sal[i];
	}
	
	printf("salary of employee = %d",sum);
}
