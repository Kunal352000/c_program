#include<stdio.h>
void main(){
	int a,b,c;
	
	printf("Enter the values:");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a==b) && (b==c) && (c==a)){
		printf("Eualiteral");
	}
	else if(a==b || b==c || c==a){
		printf("Isoscles");
	}
	else{
		printf("Scalane");
	}
}
