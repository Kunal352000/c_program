#include<stdio.h>
#include<conio.h>
void main(){
	
	int a,b,c;
	printf("Enter the Three numbers:");
	scanf("%d%d%d",&a, &b, &c);
	
	if(a>b){
		
		if(a>c){
			printf("A is greatest among others = %d",a);
		}
		
		else{
			printf("C is greatest among others = %d",c);
		}
		
	}
		
		else if (b>c){
		
			
			printf("B is geatest among others =%d",b);
		}
		
		else{
			
			printf("C is greater among others = %d",c);
		}
		
	}
	
}
