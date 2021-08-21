#include<stdio.h>
void main(){
	int n,r,p=1;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	while(n>0){
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("%d",p);
}
