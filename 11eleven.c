#include<stdio.h>
void main(){
	int a,b,c,d,e,total;
	float avg,per;
	
	printf("Enter marks of five sub:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	printf("%d \n",total);
	
	avg=total/5;
	printf("%f \n",avg);
	
	per=(total/5);
	printf("%f \n",per);
	
	
}
