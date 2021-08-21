#include<stdio.h>
void main(){
	int sal[12],i,eno,sum=0;
	
	printf("Enter employee numbers:");
	scanf("%d",&eno);
	
	printf("Enter salary of 12th month:");
	for(i=0; i<12; i++ ){
		scanf("%d",&sal[i]);
		sum=sum+sal[i];
	}
	
	printf("Salary of employee = %d",sum);
}
