#include<stdio.h>
void main(){
	int i,n,a,sum=0,count=0,product=1;
	
	printf("Enter four numbers:");
	scanf("%d",&n);

	while(n>0){
		a=n%10;
		n=n/10;
		count++;
		sum=sum+a;
		product=product*a;
		
	}
	
	
	printf("\ntotal count=%d",count);
	printf("\n sum=%d",sum);
	printf("\n product=%d",product);
}
