#include<stdio.h>
void main(){
	int n,i,q,rem,fact=1,result=0;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	q=n;
	while(q>0){
		rem=q%10;
		for(i=1; i<=rem; i++){
			fact=fact*i;
		}
		result=result+fact;
		fact=1;
		q=q/10;
	}
	
	if(result==n){
		printf("%d is strong number:",n);
	}
	else{
		printf("%d is not strong numbers",n);
	}
	
	
}
