#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c,d,e,total;
	float per;
	
	printf("Enter five subject of marks");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	total=a+b+c+d+e;
	printf("Total marks is = %d \n",total);
	per=total/5.0;
	
	printf("%f is Percentage \n",per);
	
	if(per>=90){
		printf("GRADE A \n");
	}
	
	else if(per>=80){
		printf("GRADE B \n");
	}
	
	else if(per>=70){
		printf("GRADE C \n");
	}
	
	else if(per>=60){
		printf("GRADE D \n");
	}
	
	else if(per>=40){
		printf("GRADE E \n");
	}
	
	else{
		printf("FAIL \n");
	}
}
