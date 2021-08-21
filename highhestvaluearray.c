#include<stdio.h>

void main(){
	int n[10],i,num=0;
	
	printf("Enter any 10 elements in array:");
	for(i=0; i<10; i++){
		scanf("%d",&n[i]);
	}
	
	for(i=0; i<10; i++){
		if(num<n[i]){
			num=n[i];
		}
	}
	
	printf("Highest value is %d",num);
}
