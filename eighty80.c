#include<stdio.h>
void main(){
	int n,firstdigit,lastdigit;
	
	printf("Enter the numbers:");
	scanf("%d",&n);
	
	lastdigit=n%10;
	printf("Lastdigit is %d: \n",lastdigit);
	
	firstdigit=n;
	while(firstdigit>10){
		firstdigit=firstdigit/10;
	}
	printf("firstdigit is %d: \n",firstdigit);
}
