#include<stdio.h>
void main(){
	int a;
	
	printf("Enter the numbers:");
	scanf("%d",&a);
	
	switch(a%2==0){
		case 0:
			printf("Number is odd %d:",a);
			break;
			
			case 1:
				printf("Number is even %d:",a);
				break;
	}
}
