#include<stdio.h>
void main(){
	int a,b,c,t;
	
	printf("Enter the angles of traingle:");
	scanf("%d%d%d",&a,&b,&c);
	
	t=a+b+c;
	
	if(t==180 && a!=0 && b!=0 && c!=0){
		printf("Triangle is valid:");
	}
	else{
		printf("Triangle is not valid:");
	}
}
