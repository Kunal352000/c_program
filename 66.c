#include<stdio.h>
void main(){
	int sp,cp;
	
	printf("Enter the cp:");
	scanf("%d",&cp);
	
	printf("Enter the sp:");
	scanf("%d",&sp);
	
	switch(sp>cp){
		case 0:
			printf("loss");
			break;
			
		case 1:
			printf("Profit");
			break;			
	}
}
