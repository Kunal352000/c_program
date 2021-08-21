#include<stdio.h>
void main(){
	float a,b,c,d,e;
	float total,avg,per;
	
	printf("Enter number of five subject:");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	avg=total/5;
	per=(total/500)*100;
	
	printf("%f \n",total);
	printf("%f \n",avg);
	printf("%f \n",per);
}
