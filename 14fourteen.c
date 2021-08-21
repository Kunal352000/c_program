#include<stdio.h>
#include<math.h>
void main(){
	int power,base,expo;
	
	printf("Enter base and expo:");
	scanf("%d%d",&base,&expo);
	
	power=pow(base,expo);
	
	printf("%d",power);
}
