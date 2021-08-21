#include<stdio.h>
void main(){
	int n[10],i;
	
	printf("Enter any 10 numbers:");
	for(i=0; i<10; i++){
		scanf("%d",&n[i]);
	}
	
	printf("Negative are =");
	for(i=0; i<10; i++){
		if(n[i]<0){
			printf("%d \n",n[i]);
		}
	}
}
