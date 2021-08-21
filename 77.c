#include<stdio.h>
void main(){
	int i,n,sum=0;
	
	printf("Enter order number upto n:");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		if(i%2 !=0){
			printf("%d \n",i);
		
		sum = sum+i;

		}
		i++;
		
		
}
		printf("Sum of odd numbers is %d \n",sum);
	
}
