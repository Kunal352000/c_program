#include<stdio.h>
#include<conio.h>
void main(){
	
	int sp,cp,amt;
	
	printf("Enter the selling price:");
	scanf("%d",&sp);
	
	
	printf("Enter the cost price:");
	scanf("%d", &cp);
	
	if(sp>cp){
		
		amt=sp-cp;
		printf("profit is %d \n", amt);
	}
	
	else{
		
		amt=cp-sp;
		printf("Loss is %d \n", amt);
}
	
}
