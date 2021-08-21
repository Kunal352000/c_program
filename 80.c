#include<stdio.h>
void main(){
	int n,firstdigit,lastdigit;
	
	printf("Enter any numbers:");
	scanf("%d",&n);
	
	lastdigit=n%10;
	
	while(firstdigit>0){
		firstdigit=firstdigit/10;
	}
	
	printf("Firstdigit %d: \n",firstdigit);
	printf("Lastdigit %d: \n",lastdigit);
	
}
