#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c,d,e,total;
	float per;
	
	printf("Enter marks of five subject:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	printf("Total marks of five subject is = %d \n", total);
	
	per=(total/5);
	printf("Percentage is = %f % \n",per);
	
	if(per>=90){
		printf("GRADE A");
	}
	
	else if(per>=80){
		printf("GRADE B");
	}
	
	else if(per>=70){
		printf("GRADE C");
	}
	
	else if(per>=60){
		printf("GRADE D");
	}
	
	else if(per>=40){
		printf("GRADE E");
	}
	
	else if(per<=40){
		printf("GRADE F/FAIL");
	}
	
	
	
}
