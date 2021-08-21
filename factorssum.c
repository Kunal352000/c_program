#include<stdio.h>
int main(){
	int i,num,sum=0;
	
	printf("Enter any numbers:");
	scanf("%d",&num);
	
	printf("Sum of all factors is %d \n",num);
	
	for(i=1; i<=num; i++){
		if(num%i==0){
			sum=sum+i;
			
			
			
			printf("%d \n",i);
		}
		
		
	}
	printf("sum of givien factors is %d",sum);
}
