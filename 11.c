#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c,d,e,total;
	float average,percentage;
	
	
	printf("Enter the marks of a:");
	scanf("%d",&a);
	
	printf("Enter the marks of b:");
	scanf("%d",&b);
	
	printf("Enter the marks of c:");
	scanf("%d",&c);
	
	printf("Enter the marks of d:");
	scanf("%d",&d);
	
	printf("Enter the marks of e:");
	scanf("%d",&e);
	
	
	total=a+b+c+d+e;
	average=total/5;
	percentage=(total*100)/500;
	
	printf("Total number is=%d \n",total);
	printf("Average is =%f \n",average);
	printf("percenatge is=%f \n" ,percentage);
}
